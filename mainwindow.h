
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_insert_tecn_clicked();

    void on_insert_depart_clicked();

    void on_insert_doc_ef_clicked();

    void on_insert_doc_sub_clicked();

    void on_pushButton_clicked();

    void on_actionRelatorio_Geral_triggered();

    void on_actionRelatorio_dos_Departamentos_triggered();

    void on_actionRelatorio_dos_Funcion_rios_triggered();

    void on_actionRelatorio_dos_T_cnicos_triggered();

    void on_actionRelatorio_dos_Docentes_triggered();

    void on_actionRelatorio_dos_Docentes_Efetivos_triggered();

    void on_actionRelatorio_dos_Docentes_Substitutos_triggered();

    void on_button_pesquisar_clicked();

    void on_pesquisa_salario_clicked();

private:
    Ui::MainWindow *ui;

public slots:
     void atualiza_salarios();
     void atualiza_gastos();
     void atualiza_nfuncionarios();
};
#endif // MAINWINDOW_H
