#include "mainwindow.h"
#include "ui_pesquisar.h"
#include "ui_resultados.h"
#include "controler.h"
#include "funcionario.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
