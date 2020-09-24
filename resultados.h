#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <QDialog>

namespace Ui {
class Resultados;
}

class Resultados : public QDialog
{
    Q_OBJECT

public:
    explicit Resultados(QWidget *parent = nullptr);
    ~Resultados();

private:
    Ui::Resultados *ui;

public slots:
    void inseriTexto(QString texto);
};

#endif // RESULTADOS_H
