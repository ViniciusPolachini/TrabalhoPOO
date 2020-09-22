#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pesquisar.h"
#include "controler.h"
#include "ui_pesquisar.h"
#include <iostream>
#include <fstream>
using namespace std;

controler* controle = new controler();


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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_insert_depart_clicked()
{
    std::string novo_departamento = (ui->line_depart->text()).toUtf8().constData();
    ui->line_depart->clear();
    ui->insert_depart->clearFocus();
    controle->AddDepartamento(novo_departamento);
}

void MainWindow::on_insert_tecn_clicked()
{
    std::string novo_tecnico_nome = (ui->line_tecn_name->text().toUtf8().constData());
    std::string novo_tecnico_funcao = (ui->line_tecn_func->currentText().toUtf8().constData());
    std::string novo_tecnico_nivel = "T"+std::to_string(ui->line_tecn_nivel->value());
    std::string novo_tecnico_departamento = (ui->line_tecn_depart->text().toUtf8().constData());
    controle->AddTecnico(novo_tecnico_nome,novo_tecnico_nivel,novo_tecnico_funcao,novo_tecnico_departamento);
    ui->line_tecn_name->clear();
    ui->line_tecn_nivel->setValue(1);
    ui->line_tecn_depart->clear();

    ui->insert_tecn->clearFocus();
}

void MainWindow::on_insert_doc_ef_clicked()
{
    std::string novo_docente_ef_nome = (ui->line_doc_ef_nome->text().toUtf8().constData());
    std::string novo_docente_ef_titulo = (ui->line_doc_ef_titulo->currentText().toUtf8().constData());
    std::string novo_docente_ef_nivel = "D"+std::to_string(ui->line_doc_ef_nivel->value());
    std::string novo_docente_ef_departamento = (ui->line_doc_ef_depart->text().toUtf8().constData());
    std::string novo_docente_ef_area = (ui->line_doc_ef_area->currentText().toUtf8().constData());
    controle->AddDocenteEfetivo(novo_docente_ef_nome,novo_docente_ef_nivel,novo_docente_ef_titulo,novo_docente_ef_departamento,novo_docente_ef_area);
    ui->line_doc_ef_nome->clear();
    ui->line_doc_ef_nivel->setValue(1);
    ui->line_doc_ef_depart->clear();
    ui->insert_doc_ef->clearFocus();
}

void MainWindow::on_insert_doc_sub_clicked()
{
    std::string novo_docente_sub_nome = (ui->line_doc_sub_nome->text().toUtf8().constData());
    std::string novo_docente_sub_carga = (ui->line_doc_sub_carga->currentText().toUtf8().constData());
    novo_docente_sub_carga= novo_docente_sub_carga.substr(0,1);
    std::string novo_docente_sub_nivel = "S"+std::to_string(ui->line_doc_sub_nivel->value());
    std::string novo_docente_sub_departamento = (ui->line_doc_sub_depart->text().toUtf8().constData());
    std::string novo_docente_sub_titulo = (ui->line_doc_sub_titulo->currentText().toUtf8().constData());
    int novo_docente_sub_carga_int = std::stoi(novo_docente_sub_carga);
    controle->AddDocenteSub(novo_docente_sub_nome,novo_docente_sub_nivel,novo_docente_sub_titulo,novo_docente_sub_departamento,novo_docente_sub_carga_int);
    ui->line_doc_sub_nome->clear();
    ui->line_doc_sub_nivel->setValue(1);
    ui->line_doc_sub_depart->clear();

    ui->insert_doc_sub->clearFocus();
}


void MainWindow::on_actionPesquisar_triggered()
{
    pesquisar j;
    j.exec();
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
