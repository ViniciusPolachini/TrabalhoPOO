#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_pesquisar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    QString novo_tecnico_salario = ui->line_tecn_salario->text();

    ui->line_tecn_name->clear();
    ui->line_tecn_func->clear();
    ui->line_tecn_salario->clear();

    ui->insert_tecn->clearFocus();

}
