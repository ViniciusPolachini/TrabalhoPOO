#include "resultados.h"
#include "ui_resultados.h"

resultados::resultados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resultados)
{
    ui->setupUi(this);
}

resultados::~resultados()
{
    delete ui;
}
