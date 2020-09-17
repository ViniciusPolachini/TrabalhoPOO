c#include "mainwindow.h"
#include "ui_pesquisar.h"
#include "ui_resultados.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //Inicializar main window
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Inicializar pop-up de pesquisa
    QWidget popup_pesquisar;
    Ui::pesquisar p;
    p.setupUi(&popup_pesquisar);
    popup_pesquisar.show();

    //Inicializar pop-up dos resultados da pesquisa
    QWidget popup_resultados;
    Ui::resultados r;
    r.setupUi(&popup_resultados);
    popup_resultados.show();

    return a.exec();
}
