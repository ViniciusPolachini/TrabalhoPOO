#include "resultados.h"
#include "ui_resultados.h"

Resultados::Resultados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resultados)
{
    ui->setupUi(this);
}

void Resultados::inseriTexto(QString texto){
    ui->textoResultado->setText(texto);
}

Resultados::~Resultados()
{
    delete ui;
}
