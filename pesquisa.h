#ifndef PESQUISA_H
#define PESQUISA_H

#include <QDialog>

namespace Ui {
class Pesquisa;
}

class Pesquisa : public QDialog
{
    Q_OBJECT

public:
    explicit Pesquisa(QWidget *parent = nullptr);
    ~Pesquisa();

private:
    Ui::Pesquisa *ui;
};

#endif // PESQUISA_H
