#include "pesquisar.h"
#include "ui_pesquisar.h"
#include "resultados.h"
#include "ui_resultados.h"


pesquisar::pesquisar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pesquisar)
{
    ui->setupUi(this);
}

pesquisar::~pesquisar()
{
    delete ui;
}

void pesquisar::on_pesq_depart_nome_clicked()
{
    ui->line_depart_nome->clear();
    ui->pesq_depart_nome->clearFocus();
    std::string depart_nome = (ui->line_depart_nome->text()).toUtf8().constData();
    //std::string resultado = controle->DepartamentoNome(depart_nome);
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_depart_id_clicked()
{
    ui->line_depart_id->clear();
    ui->pesq_depart_id->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_func_nome_clicked()
{
    ui->line_func_nome->clear();
    ui->pesq_func_nome->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_func_id_clicked()
{
    ui->line_func_id->clear();
    ui->pesq_func_id->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_tecn_nome_clicked()
{
    ui->line_tecn_nome->clear();
    ui->pesq_tecn_nome->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_tecn_id_clicked()
{
    ui->line_tecn_id->clear();
    ui->pesq_tecn_id->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_ef_nome_clicked()
{
    ui->line_doc_ef_nome->clear();
    ui->pesq_doc_ef_nome->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_ef_id_clicked()
{
    ui->line_doc_ef_id->clear();
    ui->pesq_doc_ef_id->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_sub_nome_clicked()
{
    ui->line_doc_sub_nome->clear();
    ui->pesq_doc_sub_nome->clearFocus();
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_sub_id_clicked()
{
    ui->line_doc_sub_id->clear();
    ui->pesq_doc_sub_id->clearFocus();
    resultados j;
    j.exec();
}
