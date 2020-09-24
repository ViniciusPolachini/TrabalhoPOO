#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "controler.h"
#include <iostream>
#include <fstream>
using namespace std;

controler* controle = new controler();

int tableDepartRowCount = 0;
int tableFuncRowCount = 0;
int tableTecnRowCount = 0;
int tableDocRowCount = 0;
int tableDocEfRowCount = 0;
int tableDocSubRowCount = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->line_tecn_nivel->setMinimum(1);
    ui->line_tecn_nivel->setMaximum(2);

    ui->line_doc_ef_nivel->setMinimum(1);
    ui->line_doc_ef_nivel->setMaximum(3);

    ui->line_doc_sub_nivel->setMinimum(1);
    ui->line_doc_sub_nivel->setMaximum(2);

    ui->line_atualizar_salario->setMaximum(1000000);
    ui->line_salario_base->setMaximum(1000000);

    /*
    ui->table_depart->verticalHeader()->setVisible(false);
    ui->table_func->verticalHeader()->setVisible(false);
    ui->table_tecn->verticalHeader()->setVisible(false);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_insert_depart_clicked()
{
    QString novoDepartamento = ui->line_depart->text();
    std::string novo_departamento = novoDepartamento.toUtf8().constData();
    ui->line_depart->clear();
    ui->insert_depart->clearFocus();

    controle->AddDepartamento(novo_departamento);

    //Atualizar Campos de Inserir funcionários
    ui->line_tecn_depart->addItem(novoDepartamento);
    ui->line_doc_ef_depart->addItem(novoDepartamento);
    ui->line_doc_sub_depart->addItem(novoDepartamento);

    //atualizar tabela de departamentos
    ui->table_depart->insertRow(tableDepartRowCount);
    ui->table_depart->setItem(tableDepartRowCount,0,new QTableWidgetItem("ID aqui"));
    ui->table_depart->setItem(tableDepartRowCount,1,new QTableWidgetItem(novoDepartamento));
    ui->table_depart->setItem(tableDepartRowCount,2,new QTableWidgetItem("N de func aqui"));
    ui->table_depart->setItem(tableDepartRowCount,3,new QTableWidgetItem("Gasto aqui"));
    tableDepartRowCount++;
}

void MainWindow::on_insert_tecn_clicked()
{
    QString novoTecnicoNome = ui->line_tecn_name->text();
    QString novoTecnicoFunção = ui->line_tecn_func->currentText();
    QString novoTecnicoNivel = "T"+QString::number(ui->line_tecn_nivel->value());
    QString novoTecnicoDepart = ui->line_tecn_depart->currentText();
    std::string novo_tecnico_nome = (ui->line_tecn_name->text().toUtf8().constData());
    std::string novo_tecnico_funcao = (ui->line_tecn_func->currentText().toUtf8().constData());
    std::string novo_tecnico_nivel = "T"+std::to_string(ui->line_tecn_nivel->value());
    std::string novo_tecnico_departamento = (ui->line_tecn_depart->currentText().toUtf8().constData());

    controle->AddTecnico(novo_tecnico_nome,novo_tecnico_nivel,novo_tecnico_funcao,novo_tecnico_departamento);

    //Limpar formulário
    ui->line_tecn_name->clear();
    ui->line_tecn_nivel->setValue(1);
    ui->line_tecn_depart->clear();
    ui->insert_tecn->clearFocus();

    //Atualizar Tabela de Funcionários
    ui->table_func->insertRow(tableFuncRowCount);
    ui->table_func->setItem(tableFuncRowCount,0,new QTableWidgetItem("ID aqui"));
    ui->table_func->setItem(tableFuncRowCount,1,new QTableWidgetItem(novoTecnicoNome));
    ui->table_func->setItem(tableFuncRowCount,2,new QTableWidgetItem("Salario Aqui"));
    ui->table_func->setItem(tableFuncRowCount,3,new QTableWidgetItem(novoTecnicoNivel));
    ui->table_func->setItem(tableFuncRowCount,4,new QTableWidgetItem(novoTecnicoDepart));
    tableFuncRowCount++;

    //Atualizar Tabela de Tecnicos
    ui->table_tecn->insertRow(tableTecnRowCount);
    ui->table_tecn->setItem(tableTecnRowCount,0,new QTableWidgetItem("ID aqui"));
    ui->table_tecn->setItem(tableTecnRowCount,1,new QTableWidgetItem(novoTecnicoNome));
    ui->table_tecn->setItem(tableTecnRowCount,2,new QTableWidgetItem(novoTecnicoFunção));
    ui->table_tecn->setItem(tableTecnRowCount,3,new QTableWidgetItem("Salario Aqui"));
    ui->table_tecn->setItem(tableTecnRowCount,4,new QTableWidgetItem(novoTecnicoNivel));
    ui->table_tecn->setItem(tableTecnRowCount,5,new QTableWidgetItem(novoTecnicoDepart));
    tableTecnRowCount++;
}

void MainWindow::on_insert_doc_ef_clicked()
{
    QString novoDocenteEfNome = ui->line_doc_ef_nome->text();
    QString novoDocenteEfTitulo = ui->line_doc_ef_titulo->currentText();
    QString novoDocenteEfNivel = "D"+QString::number(ui->line_doc_ef_nivel->value());
    QString novoDocenteEfDepart = ui->line_doc_ef_depart->currentText();
    QString novoDocenteEfArea = ui->line_doc_ef_area->currentText();
    std::string novo_docente_ef_nome = (ui->line_doc_ef_nome->text().toUtf8().constData());
    std::string novo_docente_ef_titulo = (ui->line_doc_ef_titulo->currentText().toUtf8().constData());
    std::string novo_docente_ef_nivel = "D"+std::to_string(ui->line_doc_ef_nivel->value());
    std::string novo_docente_ef_departamento = (ui->line_doc_ef_depart->currentText().toUtf8().constData());
    std::string novo_docente_ef_area = (ui->line_doc_ef_area->currentText().toUtf8().constData());

    controle->AddDocenteEfetivo(novo_docente_ef_nome,novo_docente_ef_nivel,novo_docente_ef_titulo,novo_docente_ef_departamento,novo_docente_ef_area);

    //Limpar Formulário
    ui->line_doc_ef_nome->clear();
    ui->line_doc_ef_nivel->setValue(1);
    ui->line_doc_ef_depart->clear();
    ui->insert_doc_ef->clearFocus();

    //Atualizar Tabela de Funcionários
    ui->table_func->insertRow(tableFuncRowCount);
    ui->table_func->setItem(tableFuncRowCount,0,new QTableWidgetItem("ID aqui"));
    ui->table_func->setItem(tableFuncRowCount,1,new QTableWidgetItem(novoDocenteEfNome));
    ui->table_func->setItem(tableFuncRowCount,2,new QTableWidgetItem("Salario Aqui"));
    ui->table_func->setItem(tableFuncRowCount,3,new QTableWidgetItem(novoDocenteEfNivel));
    ui->table_func->setItem(tableFuncRowCount,4,new QTableWidgetItem(novoDocenteEfDepart));
    tableFuncRowCount++;

    //Atualizar Tabela de Docentes
    ui->table_doc->insertRow(tableDocRowCount);
    ui->table_doc->setItem(tableDocRowCount,0,new QTableWidgetItem("Placeholder ID"));
    ui->table_doc->setItem(tableDocRowCount,1,new QTableWidgetItem(novoDocenteEfNome));
    ui->table_doc->setItem(tableDocRowCount,2,new QTableWidgetItem(novoDocenteEfTitulo));
    ui->table_doc->setItem(tableDocRowCount,3,new QTableWidgetItem("Placeholder salario"));
    ui->table_doc->setItem(tableDocRowCount,4,new QTableWidgetItem(novoDocenteEfNivel));
    ui->table_doc->setItem(tableDocRowCount,5,new QTableWidgetItem(novoDocenteEfDepart));
    tableDocRowCount++;

    //Atualizar Tabela de Docentes Efetivos
    ui->table_doc_ef->insertRow(tableDocEfRowCount);
    ui->table_doc_ef->setItem(tableDocEfRowCount,0,new QTableWidgetItem("ID aqui"));
    ui->table_doc_ef->setItem(tableDocEfRowCount,1,new QTableWidgetItem(novoDocenteEfNome));
    ui->table_doc_ef->setItem(tableDocEfRowCount,2,new QTableWidgetItem(novoDocenteEfTitulo));
    ui->table_doc_ef->setItem(tableDocEfRowCount,3,new QTableWidgetItem(novoDocenteEfArea));
    ui->table_doc_ef->setItem(tableDocEfRowCount,4,new QTableWidgetItem("Salario Aqui"));
    ui->table_doc_ef->setItem(tableDocEfRowCount,5,new QTableWidgetItem(novoDocenteEfNivel));
    ui->table_doc_ef->setItem(tableDocEfRowCount,6,new QTableWidgetItem(novoDocenteEfDepart));
    tableDocEfRowCount++;
}

void MainWindow::on_insert_doc_sub_clicked()
{
    QString novoDocenteSubNome = ui->line_doc_sub_nome->text();
    QString novoDocenteSubCarga;
    QString novoDocenteSubNivel = QString::number(ui->line_doc_sub_nivel->value());
    QString novoDocenteSubDepart = ui->line_doc_sub_depart->currentText();
    QString novoDocenteSubTitulo = ui->line_doc_sub_titulo->currentText();
    std::string novo_docente_sub_nome = (ui->line_doc_sub_nome->text().toUtf8().constData());
    std::string novo_docente_sub_carga = (ui->line_doc_sub_carga->currentText().toUtf8().constData());
    novo_docente_sub_carga= novo_docente_sub_carga.substr(0,2);
    std::string novo_docente_sub_nivel = "S"+std::to_string(ui->line_doc_sub_nivel->value());
    std::string novo_docente_sub_departamento = (ui->line_doc_sub_depart->currentText().toUtf8().constData());
    std::string novo_docente_sub_titulo = (ui->line_doc_sub_titulo->currentText().toUtf8().constData());
    int novo_docente_sub_carga_int = std::stoi(novo_docente_sub_carga);

    controle->AddDocenteSub(novo_docente_sub_nome,novo_docente_sub_nivel,novo_docente_sub_titulo,novo_docente_sub_departamento,novo_docente_sub_carga_int);

    //Limpar Formulário
    ui->line_doc_sub_nome->clear();
    ui->line_doc_sub_nivel->setValue(1);
    ui->line_doc_sub_depart->clear();
    ui->insert_doc_sub->clearFocus();

    //Atualizar Tabela de Funcionários
    ui->table_func->insertRow(tableFuncRowCount);
    ui->table_func->setItem(tableFuncRowCount,0,new QTableWidgetItem("ID aqui"));
    ui->table_func->setItem(tableFuncRowCount,1,new QTableWidgetItem(novoDocenteSubNome));
    ui->table_func->setItem(tableFuncRowCount,2,new QTableWidgetItem("Salario Aqui"));
    ui->table_func->setItem(tableFuncRowCount,3,new QTableWidgetItem(novoDocenteSubNivel));
    ui->table_func->setItem(tableFuncRowCount,4,new QTableWidgetItem(novoDocenteSubDepart));
    tableFuncRowCount++;

    //Atualizar Tabela de Docentes
    ui->table_doc->insertRow(tableDocRowCount);
    ui->table_doc->setItem(tableDocRowCount,0,new QTableWidgetItem("Placeholder ID"));
    ui->table_doc->setItem(tableDocRowCount,1,new QTableWidgetItem(novoDocenteSubNome));
    ui->table_doc->setItem(tableDocRowCount,2,new QTableWidgetItem(novoDocenteSubTitulo));
    ui->table_doc->setItem(tableDocRowCount,3,new QTableWidgetItem("Placeholder salario"));
    ui->table_doc->setItem(tableDocRowCount,4,new QTableWidgetItem(novoDocenteSubNivel));
    ui->table_doc->setItem(tableDocRowCount,5,new QTableWidgetItem(novoDocenteSubDepart));
    tableDocRowCount++;

    //Atualizar Tabela de Docentes Substitutos
    ui->table_doc_sub->insertRow(tableDocSubRowCount);
    ui->table_doc_sub->setItem(tableDocSubRowCount,0,new QTableWidgetItem("ID aqui"));
    ui->table_doc_sub->setItem(tableDocSubRowCount,1,new QTableWidgetItem(novoDocenteSubNome));
    ui->table_doc_sub->setItem(tableDocSubRowCount,2,new QTableWidgetItem(novoDocenteSubTitulo));
    ui->table_doc_sub->setItem(tableDocSubRowCount,3,new QTableWidgetItem("Carga Aqui"));
    ui->table_doc_sub->setItem(tableDocSubRowCount,4,new QTableWidgetItem("Salario Aqui"));
    ui->table_doc_sub->setItem(tableDocSubRowCount,5,new QTableWidgetItem(novoDocenteSubNivel));
    ui->table_doc_sub->setItem(tableDocSubRowCount,6,new QTableWidgetItem(novoDocenteSubDepart));
    tableDocSubRowCount++;
}


void MainWindow::on_pushButton_clicked()
{
    double salario = ui->line_atualizar_salario->value();
    ui->line_salario_base->setValue(salario);
    controle->SetSalarioBase(salario);
    ui->line_atualizar_salario->setValue(0);
    ui->pushButton->clearFocus();
}

void MainWindow::on_actionRelatorio_Geral_triggered()
{
    ofstream myfile;
    myfile.open("relatorio-geral.txt", ios::out | ios::trunc);
    myfile << controle->Geral();
    myfile.close();
}

void MainWindow::on_actionRelatorio_dos_Departamentos_triggered()
{
    ofstream myfile;
    myfile.open("relatorio-dos-departamentos.txt", ios::out | ios::trunc);
    myfile << controle->Departamentos();
    myfile.close();
}

void MainWindow::on_actionRelatorio_dos_Funcion_rios_triggered()
{
    ofstream myfile;
    myfile.open("relatorio-dos-funcionarios.txt", ios::out | ios::trunc);
    myfile << controle->Funcionarios();
    myfile.close();
}

void MainWindow::on_actionRelatorio_dos_T_cnicos_triggered()
{
    ofstream myfile;
    myfile.open("relatorio-dos-tecnicos.txt", ios::out | ios::trunc);
    myfile << controle->Tecnicos();
    myfile.close();
}

void MainWindow::on_actionRelatorio_dos_Docentes_triggered()
{
    ofstream myfile;
    myfile.open("relatorio-dos-docentes.txt", ios::out | ios::trunc);
    myfile << controle->Docentes();
    myfile.close();
}

void MainWindow::on_actionRelatorio_dos_Docentes_Efetivos_triggered()
{
    ofstream myfile;
    myfile.open("relatorio-dos-docentes-efetivos.txt", ios::out | ios::trunc);
    myfile << controle->Efetivos();
    myfile.close();
}

void MainWindow::on_actionRelatorio_dos_Docentes_Substitutos_triggered()
{
    ofstream myfile;
    myfile.open("relatorio-dos-docentes-substitutos.txt", ios::out | ios::trunc);
    myfile << controle->Subs();
    myfile.close();
}

void MainWindow::on_button_pesquisar_clicked()
{
    QString textoDaPesquisa = ui->line_pesquisar->text();
    QString tipoDaPesquisa = ui->line_pesq_tipo->currentText();
    QString nomeIdPesquisa = ui->line_pesq_nome_id->currentText();

    ui->line_pesquisar->clear();
    ui->button_pesquisar->clearFocus();
}
