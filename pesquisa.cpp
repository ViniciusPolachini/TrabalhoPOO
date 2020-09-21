#include "pesquisa.h"
#include "ui_pesquisa.h"

Pesquisa::Pesquisa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pesquisa)
{
    ui->setupUi(this);
}

Pesquisa::~Pesquisa()
{
    delete ui;
}
