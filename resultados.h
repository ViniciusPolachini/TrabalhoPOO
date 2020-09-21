#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <QDialog>

namespace Ui {
class resultados;
}

class resultados : public QDialog
{
    Q_OBJECT

public:
    explicit resultados(QWidget *parent = nullptr);
    ~resultados();

private:
    Ui::resultados *ui;
};

#endif // RESULTADOS_H
