#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pesquisar.h"
#include "controler.h"
#include "ui_pesquisar.h"

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
    short int novo_tecnico_nivel = ui->line_tecn_nivel->value();
    std::string novo_tecnico_departamento = (ui->line_tecn_depart->text().toUtf8().constData());

    ui->line_tecn_name->clear();
    ui->line_tecn_nivel->setValue(1);
    ui->line_tecn_depart->clear();

    ui->insert_tecn->clearFocus();
}

void MainWindow::on_insert_doc_ef_clicked()
{
    std::string novo_docente_ef_nome = (ui->line_doc_ef_nome->text().toUtf8().constData());
    std::string novo_docente_ef_titulo = (ui->line_doc_ef_titulo->currentText().toUtf8().constData());
    short int novo_docente_ef_nivel = ui->line_doc_ef_nivel->value();
    std::string novo_docente_ef_departamento = (ui->line_doc_ef_depart->text().toUtf8().constData());
    std::string novo_docente_ef_area = (ui->line_doc_ef_area->currentText().toUtf8().constData());

    ui->line_doc_ef_nome->clear();
    ui->line_doc_ef_nivel->setValue(1);
    ui->line_doc_ef_depart->clear();

    ui->insert_doc_ef->clearFocus();
}

void MainWindow::on_insert_doc_sub_clicked()
{
    std::string novo_docente_sub_nome = (ui->line_doc_sub_nome->text().toUtf8().constData());
    std::string novo_docente_sub_carga = (ui->line_doc_sub_carga->currentText().toUtf8().constData());
    short int novo_docente_sub_nivel = ui->line_doc_sub_nivel->value();
    std::string novo_docente_sub_departamento = (ui->line_doc_sub_depart->text().toUtf8().constData());
    std::string novo_docente_sub_titulo = (ui->line_doc_sub_titulo->currentText().toUtf8().constData());

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

    ui->line_atualizar_salario->setValue(0);
    ui->pushButton->clearFocus();
}
