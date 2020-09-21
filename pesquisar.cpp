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
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_depart_id_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_func_nome_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_func_id_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_tecn_nome_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_tecn_id_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_ef_nome_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_ef_id_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_sub_nome_clicked()
{
    resultados j;
    j.exec();
}

void pesquisar::on_pesq_doc_sub_id_clicked()
{
    resultados j;
    j.exec();
}
