#ifndef PESQUISAR_H
#define PESQUISAR_H

#include <QDialog>

namespace Ui {
class pesquisar;
}

class pesquisar : public QDialog
{
    Q_OBJECT

public:
    explicit pesquisar(QWidget *parent = nullptr);
    ~pesquisar();

private:
    Ui::pesquisar *ui;
};

#endif // PESQUISAR_H
