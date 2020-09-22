#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controler.h"

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

    void on_actionPesquisar_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //controler* controle = new controler();
};
#endif // MAINWINDOW_H
