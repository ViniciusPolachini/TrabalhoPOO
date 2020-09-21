#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pesquisar.h"
#include "ui_pesquisar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->line_tecn_salario->setMinimum(1000);
    ui->line_tecn_salario->setMaximum(900000);
    ui->line_tecn_nivel->setMinimum(1);
    ui->line_tecn_nivel->setMaximum(2);

    ui->line_doc_ef_salario->setMinimum(1000);
    ui->line_doc_ef_salario->setMaximum(900000);
    ui->line_doc_ef_nivel->setMinimum(1);
    ui->line_doc_ef_nivel->setMaximum(2);

    ui->line_doc_sub_salario->setMinimum(500);
    ui->line_doc_sub_salario->setMaximum(900000);
    ui->line_doc_sub_nivel->setMinimum(1);
    ui->line_doc_sub_nivel->setMaximum(2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_insert_depart_clicked()
{
    QString novo_departamento = (ui->line_depart->text()).toUtf8().constData();
    ui->line_depart->clear();
    ui->insert_depart->clearFocus();
}

void MainWindow::on_insert_tecn_clicked()
{
    QString novo_tecnico_nome = ui->line_tecn_name->text();
    QString novo_tecnico_funcao = ui->line_tecn_func->text();
    double novo_tecnico_salario = ui->line_tecn_salario->value();
    int novo_tecnico_nivel = ui->line_tecn_nivel->value();
    QString novo_tecnico_departamento = ui->line_tecn_depart->text();

    ui->line_tecn_name->clear();
    ui->line_tecn_func->clear();
    ui->line_tecn_salario->setValue(1000);
    ui->line_tecn_nivel->setValue(1);
    ui->line_tecn_depart->clear();

    ui->insert_tecn->clearFocus();
}

void MainWindow::on_insert_doc_ef_clicked()
{
    QString novo_docente_ef_nome = ui->line_doc_ef_nome->text();
    QString novo_docente_ef_titulo = ui->line_doc_ef_titulo->text();
    double novo_docente_ef_salario = ui->line_doc_ef_salario->value();
    int novo_docente_ef_nivel = ui->line_doc_ef_nivel->value();
    QString novo_docente_ef_departamento = ui->line_doc_ef_depart->text();

    ui->line_doc_ef_nome->clear();
    ui->line_doc_ef_titulo->clear();
    ui->line_doc_ef_salario->setValue(1000);
    ui->line_doc_ef_nivel->setValue(1);
    ui->line_doc_ef_depart->clear();

    ui->insert_doc_ef->clearFocus();
}

void MainWindow::on_insert_doc_sub_clicked()
{
    QString novo_docente_sub_nome = ui->line_doc_sub_nome->text();
    QString novo_docente_sub_carga = ui->line_doc_sub_carga->text();
    double novo_docente_sub_salario = ui->line_doc_sub_salario->value();
    int novo_docente_sub_nivel = ui->line_doc_sub_nivel->value();
    QString novo_docente_sub_departamento = ui->line_doc_sub_depart->text();

    ui->line_doc_sub_nome->clear();
    ui->line_doc_sub_carga->clear();
    ui->line_doc_sub_salario->setValue(500);
    ui->line_doc_sub_nivel->setValue(1);
    ui->line_doc_sub_depart->clear();

    ui->insert_doc_sub->clearFocus();
}


void MainWindow::on_actionPesquisar_triggered()
{
    pesquisar j;
    j.exec();
}
