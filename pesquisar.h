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

private slots:
    void on_pesq_depart_nome_clicked();

    void on_pesq_depart_id_clicked();

    void on_pesq_func_nome_clicked();

    void on_pesq_func_id_clicked();

    void on_pesq_tecn_nome_clicked();

    void on_pesq_tecn_id_clicked();

    void on_pesq_doc_ef_nome_clicked();

    void on_pesq_doc_ef_id_clicked();

    void on_pesq_doc_sub_nome_clicked();

    void on_pesq_doc_sub_id_clicked();

private:
    Ui::pesquisar *ui;
};

#endif // PESQUISAR_H
