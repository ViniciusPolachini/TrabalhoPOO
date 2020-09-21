#include "pesquisar.h"
#include "ui_pesquisar.h"

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
