/********************************************************************************
** Form generated from reading UI file 'mainwindowLbpTMG.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWLBPTMG_H
#define MAINWINDOWLBPTMG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionAbrir;
    QAction *actionNovo_Departamento;
    QAction *actionDocente_Efetivo;
    QAction *actionFuncion_rio_2;
    QAction *actionDocente_Substituto_2;
    QAction *actionGeral;
    QAction *actionT_cnico;
    QAction *actionDocente_Substituto_3;
    QAction *actionDepartamentos_por_gasto;
    QAction *actionFuncion_rios_por_sal_rio;
    QAction *actionT_cnicos;
    QAction *actionDocentes;
    QAction *actionDocentes_Efetivos;
    QAction *actionDocentes_Substitutos;
    QAction *actionDepartamento_por_ID;
    QAction *actionDepartamento_por_nome;
    QAction *actionFuncion_rio_por_ID;
    QAction *actionFuncion_rio_por_nome;
    QAction *actionPor_ID;
    QAction *actionPor_ID_2;
    QAction *actionPor_nome;
    QAction *actionPor_nome_2;
    QAction *actionEfetivo;
    QAction *actionSubstituto;
    QAction *actionGeral_2;
    QAction *actionGasto_em_faixa_especifica;
    QAction *actionGeral_3;
    QAction *actionSalario_especifico;
    QAction *actionTecnicos;
    QAction *actionGeral_4;
    QAction *actionEfetivos;
    QAction *actionSubstitutos;
    QAction *actionTecnico;
    QAction *actionEfetivo_2;
    QAction *actionSubstituto_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *departamentos;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget_2;
    QWidget *funcionarios;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_3;
    QWidget *tecnicos;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget_4;
    QWidget *docentes;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget_7;
    QWidget *docentesEf;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidget_5;
    QWidget *docentesSub;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget_6;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuInserir;
    QMenu *menuFuncion_rio;
    QMenu *menuDocente_2;
    QMenu *menuExportar_Relat_rio;
    QMenu *menuDepartamentos;
    QMenu *menuFuncion_rios;
    QMenu *menuDocentes;
    QMenu *menuPesquisar;
    QMenu *menuFuncion_rio_por_ID;
    QMenu *menuDepartamento_por_ID;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionNovo_Departamento = new QAction(MainWindow);
        actionNovo_Departamento->setObjectName(QString::fromUtf8("actionNovo_Departamento"));
        actionDocente_Efetivo = new QAction(MainWindow);
        actionDocente_Efetivo->setObjectName(QString::fromUtf8("actionDocente_Efetivo"));
        actionFuncion_rio_2 = new QAction(MainWindow);
        actionFuncion_rio_2->setObjectName(QString::fromUtf8("actionFuncion_rio_2"));
        actionDocente_Substituto_2 = new QAction(MainWindow);
        actionDocente_Substituto_2->setObjectName(QString::fromUtf8("actionDocente_Substituto_2"));
        actionGeral = new QAction(MainWindow);
        actionGeral->setObjectName(QString::fromUtf8("actionGeral"));
        actionT_cnico = new QAction(MainWindow);
        actionT_cnico->setObjectName(QString::fromUtf8("actionT_cnico"));
        actionDocente_Substituto_3 = new QAction(MainWindow);
        actionDocente_Substituto_3->setObjectName(QString::fromUtf8("actionDocente_Substituto_3"));
        actionDepartamentos_por_gasto = new QAction(MainWindow);
        actionDepartamentos_por_gasto->setObjectName(QString::fromUtf8("actionDepartamentos_por_gasto"));
        actionFuncion_rios_por_sal_rio = new QAction(MainWindow);
        actionFuncion_rios_por_sal_rio->setObjectName(QString::fromUtf8("actionFuncion_rios_por_sal_rio"));
        actionT_cnicos = new QAction(MainWindow);
        actionT_cnicos->setObjectName(QString::fromUtf8("actionT_cnicos"));
        actionDocentes = new QAction(MainWindow);
        actionDocentes->setObjectName(QString::fromUtf8("actionDocentes"));
        actionDocentes_Efetivos = new QAction(MainWindow);
        actionDocentes_Efetivos->setObjectName(QString::fromUtf8("actionDocentes_Efetivos"));
        actionDocentes_Substitutos = new QAction(MainWindow);
        actionDocentes_Substitutos->setObjectName(QString::fromUtf8("actionDocentes_Substitutos"));
        actionDepartamento_por_ID = new QAction(MainWindow);
        actionDepartamento_por_ID->setObjectName(QString::fromUtf8("actionDepartamento_por_ID"));
        actionDepartamento_por_nome = new QAction(MainWindow);
        actionDepartamento_por_nome->setObjectName(QString::fromUtf8("actionDepartamento_por_nome"));
        actionFuncion_rio_por_ID = new QAction(MainWindow);
        actionFuncion_rio_por_ID->setObjectName(QString::fromUtf8("actionFuncion_rio_por_ID"));
        actionFuncion_rio_por_nome = new QAction(MainWindow);
        actionFuncion_rio_por_nome->setObjectName(QString::fromUtf8("actionFuncion_rio_por_nome"));
        actionPor_ID = new QAction(MainWindow);
        actionPor_ID->setObjectName(QString::fromUtf8("actionPor_ID"));
        actionPor_ID_2 = new QAction(MainWindow);
        actionPor_ID_2->setObjectName(QString::fromUtf8("actionPor_ID_2"));
        actionPor_nome = new QAction(MainWindow);
        actionPor_nome->setObjectName(QString::fromUtf8("actionPor_nome"));
        actionPor_nome_2 = new QAction(MainWindow);
        actionPor_nome_2->setObjectName(QString::fromUtf8("actionPor_nome_2"));
        actionEfetivo = new QAction(MainWindow);
        actionEfetivo->setObjectName(QString::fromUtf8("actionEfetivo"));
        actionSubstituto = new QAction(MainWindow);
        actionSubstituto->setObjectName(QString::fromUtf8("actionSubstituto"));
        actionGeral_2 = new QAction(MainWindow);
        actionGeral_2->setObjectName(QString::fromUtf8("actionGeral_2"));
        actionGasto_em_faixa_especifica = new QAction(MainWindow);
        actionGasto_em_faixa_especifica->setObjectName(QString::fromUtf8("actionGasto_em_faixa_especifica"));
        actionGeral_3 = new QAction(MainWindow);
        actionGeral_3->setObjectName(QString::fromUtf8("actionGeral_3"));
        actionSalario_especifico = new QAction(MainWindow);
        actionSalario_especifico->setObjectName(QString::fromUtf8("actionSalario_especifico"));
        actionTecnicos = new QAction(MainWindow);
        actionTecnicos->setObjectName(QString::fromUtf8("actionTecnicos"));
        actionGeral_4 = new QAction(MainWindow);
        actionGeral_4->setObjectName(QString::fromUtf8("actionGeral_4"));
        actionEfetivos = new QAction(MainWindow);
        actionEfetivos->setObjectName(QString::fromUtf8("actionEfetivos"));
        actionSubstitutos = new QAction(MainWindow);
        actionSubstitutos->setObjectName(QString::fromUtf8("actionSubstitutos"));
        actionTecnico = new QAction(MainWindow);
        actionTecnico->setObjectName(QString::fromUtf8("actionTecnico"));
        actionEfetivo_2 = new QAction(MainWindow);
        actionEfetivo_2->setObjectName(QString::fromUtf8("actionEfetivo_2"));
        actionSubstituto_2 = new QAction(MainWindow);
        actionSubstituto_2->setObjectName(QString::fromUtf8("actionSubstituto_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setSizeIncrement(QSize(0, 0));
        departamentos = new QWidget();
        departamentos->setObjectName(QString::fromUtf8("departamentos"));
        verticalLayout_2 = new QVBoxLayout(departamentos);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget_2 = new QTableWidget(departamentos);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(196);

        verticalLayout_2->addWidget(tableWidget_2);

        tabWidget->addTab(departamentos, QString());
        funcionarios = new QWidget();
        funcionarios->setObjectName(QString::fromUtf8("funcionarios"));
        verticalLayout = new QVBoxLayout(funcionarios);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget_3 = new QTableWidget(funcionarios);
        if (tableWidget_3->columnCount() < 5)
            tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(196);

        verticalLayout->addWidget(tableWidget_3);

        tabWidget->addTab(funcionarios, QString());
        tecnicos = new QWidget();
        tecnicos->setObjectName(QString::fromUtf8("tecnicos"));
        verticalLayout_4 = new QVBoxLayout(tecnicos);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableWidget_4 = new QTableWidget(tecnicos);
        if (tableWidget_4->columnCount() < 6)
            tableWidget_4->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(196);

        verticalLayout_4->addWidget(tableWidget_4);

        tabWidget->addTab(tecnicos, QString());
        docentes = new QWidget();
        docentes->setObjectName(QString::fromUtf8("docentes"));
        verticalLayout_3 = new QVBoxLayout(docentes);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableWidget_7 = new QTableWidget(docentes);
        if (tableWidget_7->columnCount() < 6)
            tableWidget_7->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(5, __qtablewidgetitem20);
        tableWidget_7->setObjectName(QString::fromUtf8("tableWidget_7"));
        tableWidget_7->horizontalHeader()->setDefaultSectionSize(196);

        verticalLayout_3->addWidget(tableWidget_7);

        tabWidget->addTab(docentes, QString());
        docentesEf = new QWidget();
        docentesEf->setObjectName(QString::fromUtf8("docentesEf"));
        verticalLayout_5 = new QVBoxLayout(docentesEf);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tableWidget_5 = new QTableWidget(docentesEf);
        if (tableWidget_5->columnCount() < 7)
            tableWidget_5->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(5, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(6, __qtablewidgetitem27);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        tableWidget_5->horizontalHeader()->setDefaultSectionSize(196);

        verticalLayout_5->addWidget(tableWidget_5);

        tabWidget->addTab(docentesEf, QString());
        docentesSub = new QWidget();
        docentesSub->setObjectName(QString::fromUtf8("docentesSub"));
        verticalLayout_6 = new QVBoxLayout(docentesSub);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableWidget_6 = new QTableWidget(docentesSub);
        if (tableWidget_6->columnCount() < 7)
            tableWidget_6->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(4, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(5, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(6, __qtablewidgetitem34);
        tableWidget_6->setObjectName(QString::fromUtf8("tableWidget_6"));
        tableWidget_6->horizontalHeader()->setDefaultSectionSize(196);

        verticalLayout_6->addWidget(tableWidget_6);

        tabWidget->addTab(docentesSub, QString());

        verticalLayout_7->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuInserir = new QMenu(menubar);
        menuInserir->setObjectName(QString::fromUtf8("menuInserir"));
        menuFuncion_rio = new QMenu(menuInserir);
        menuFuncion_rio->setObjectName(QString::fromUtf8("menuFuncion_rio"));
        menuDocente_2 = new QMenu(menuFuncion_rio);
        menuDocente_2->setObjectName(QString::fromUtf8("menuDocente_2"));
        menuExportar_Relat_rio = new QMenu(menubar);
        menuExportar_Relat_rio->setObjectName(QString::fromUtf8("menuExportar_Relat_rio"));
        menuDepartamentos = new QMenu(menuExportar_Relat_rio);
        menuDepartamentos->setObjectName(QString::fromUtf8("menuDepartamentos"));
        menuFuncion_rios = new QMenu(menuExportar_Relat_rio);
        menuFuncion_rios->setObjectName(QString::fromUtf8("menuFuncion_rios"));
        menuDocentes = new QMenu(menuFuncion_rios);
        menuDocentes->setObjectName(QString::fromUtf8("menuDocentes"));
        menuPesquisar = new QMenu(menubar);
        menuPesquisar->setObjectName(QString::fromUtf8("menuPesquisar"));
        menuFuncion_rio_por_ID = new QMenu(menuPesquisar);
        menuFuncion_rio_por_ID->setObjectName(QString::fromUtf8("menuFuncion_rio_por_ID"));
        menuDepartamento_por_ID = new QMenu(menuPesquisar);
        menuDepartamento_por_ID->setObjectName(QString::fromUtf8("menuDepartamento_por_ID"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuInserir->menuAction());
        menubar->addAction(menuPesquisar->menuAction());
        menubar->addAction(menuExportar_Relat_rio->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionAbrir);
        menuInserir->addAction(actionNovo_Departamento);
        menuInserir->addAction(menuFuncion_rio->menuAction());
        menuFuncion_rio->addAction(actionTecnico);
        menuFuncion_rio->addAction(menuDocente_2->menuAction());
        menuDocente_2->addAction(actionEfetivo_2);
        menuDocente_2->addAction(actionSubstituto_2);
        menuExportar_Relat_rio->addAction(actionGeral);
        menuExportar_Relat_rio->addAction(menuDepartamentos->menuAction());
        menuExportar_Relat_rio->addAction(menuFuncion_rios->menuAction());
        menuDepartamentos->addAction(actionGeral_2);
        menuDepartamentos->addAction(actionGasto_em_faixa_especifica);
        menuFuncion_rios->addAction(actionGeral_3);
        menuFuncion_rios->addAction(actionSalario_especifico);
        menuFuncion_rios->addAction(actionTecnicos);
        menuFuncion_rios->addAction(menuDocentes->menuAction());
        menuDocentes->addAction(actionGeral_4);
        menuDocentes->addAction(actionEfetivos);
        menuDocentes->addAction(actionSubstitutos);
        menuPesquisar->addAction(menuDepartamento_por_ID->menuAction());
        menuPesquisar->addAction(menuFuncion_rio_por_ID->menuAction());
        menuFuncion_rio_por_ID->addAction(actionPor_ID_2);
        menuFuncion_rio_por_ID->addAction(actionPor_nome);
        menuDepartamento_por_ID->addAction(actionPor_ID);
        menuDepartamento_por_ID->addAction(actionPor_nome_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Universidade", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionNovo_Departamento->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        actionDocente_Efetivo->setText(QCoreApplication::translate("MainWindow", "T\303\251cnico", nullptr));
        actionFuncion_rio_2->setText(QCoreApplication::translate("MainWindow", "Departamento (por nome)", nullptr));
        actionDocente_Substituto_2->setText(QCoreApplication::translate("MainWindow", "Funcion\303\241rio (por nome)", nullptr));
        actionGeral->setText(QCoreApplication::translate("MainWindow", "Geral", nullptr));
        actionT_cnico->setText(QCoreApplication::translate("MainWindow", "Docente Substituto", nullptr));
        actionDocente_Substituto_3->setText(QCoreApplication::translate("MainWindow", "Docente Substituto", nullptr));
        actionDepartamentos_por_gasto->setText(QCoreApplication::translate("MainWindow", "Departamentos (por gasto)", nullptr));
        actionFuncion_rios_por_sal_rio->setText(QCoreApplication::translate("MainWindow", "Funcion\303\241rios (por sal\303\241rio)", nullptr));
        actionT_cnicos->setText(QCoreApplication::translate("MainWindow", "T\303\251cnicos", nullptr));
        actionDocentes->setText(QCoreApplication::translate("MainWindow", "Docentes", nullptr));
        actionDocentes_Efetivos->setText(QCoreApplication::translate("MainWindow", "Docentes Efetivos", nullptr));
        actionDocentes_Substitutos->setText(QCoreApplication::translate("MainWindow", "Docentes Substitutos", nullptr));
        actionDepartamento_por_ID->setText(QCoreApplication::translate("MainWindow", "Departamento (por ID)", nullptr));
        actionDepartamento_por_nome->setText(QCoreApplication::translate("MainWindow", "Departamento (por nome)", nullptr));
        actionFuncion_rio_por_ID->setText(QCoreApplication::translate("MainWindow", "Funcion\303\241rio (por ID)", nullptr));
        actionFuncion_rio_por_nome->setText(QCoreApplication::translate("MainWindow", "Funcion\303\241rio (por nome)", nullptr));
        actionPor_ID->setText(QCoreApplication::translate("MainWindow", "Por ID", nullptr));
        actionPor_ID_2->setText(QCoreApplication::translate("MainWindow", "Por ID", nullptr));
        actionPor_nome->setText(QCoreApplication::translate("MainWindow", "Por nome", nullptr));
        actionPor_nome_2->setText(QCoreApplication::translate("MainWindow", "Por nome", nullptr));
        actionEfetivo->setText(QCoreApplication::translate("MainWindow", "Efetivo", nullptr));
        actionSubstituto->setText(QCoreApplication::translate("MainWindow", "Substituto", nullptr));
        actionGeral_2->setText(QCoreApplication::translate("MainWindow", "Geral", nullptr));
        actionGasto_em_faixa_especifica->setText(QCoreApplication::translate("MainWindow", "Gasto em faixa especifica", nullptr));
        actionGeral_3->setText(QCoreApplication::translate("MainWindow", "Geral", nullptr));
        actionSalario_especifico->setText(QCoreApplication::translate("MainWindow", "Salario especifico", nullptr));
        actionTecnicos->setText(QCoreApplication::translate("MainWindow", "Tecnicos", nullptr));
        actionGeral_4->setText(QCoreApplication::translate("MainWindow", "Geral", nullptr));
        actionEfetivos->setText(QCoreApplication::translate("MainWindow", "Efetivos", nullptr));
        actionSubstitutos->setText(QCoreApplication::translate("MainWindow", "Substitutos", nullptr));
        actionTecnico->setText(QCoreApplication::translate("MainWindow", "Tecnico", nullptr));
        actionEfetivo_2->setText(QCoreApplication::translate("MainWindow", "Efetivo", nullptr));
        actionSubstituto_2->setText(QCoreApplication::translate("MainWindow", "Substituto", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Numero de funcionarios", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Gasto com Funcion\303\241rios", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(departamentos), QCoreApplication::translate("MainWindow", "Departamentos", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Sal\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(funcionarios), QCoreApplication::translate("MainWindow", "Funcion\303\241rios", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Fun\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Sal\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_4->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tecnicos), QCoreApplication::translate("MainWindow", "T\303\251cnicos", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_7->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Sal\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_7->horizontalHeaderItem(5);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(docentes), QCoreApplication::translate("MainWindow", "Docentes", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "\303\201rea", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Sal\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_5->horizontalHeaderItem(5);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_5->horizontalHeaderItem(6);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(docentesEf), QCoreApplication::translate("MainWindow", "Docentes Efetivos", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_6->horizontalHeaderItem(0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "Titula\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_6->horizontalHeaderItem(3);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "Carga Hor\303\241ria", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_6->horizontalHeaderItem(4);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "Sal\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_6->horizontalHeaderItem(5);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_6->horizontalHeaderItem(6);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(docentesSub), QCoreApplication::translate("MainWindow", "Docentes Substitutos", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuInserir->setTitle(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        menuFuncion_rio->setTitle(QCoreApplication::translate("MainWindow", "Funcion\303\241rio", nullptr));
        menuDocente_2->setTitle(QCoreApplication::translate("MainWindow", "Docente", nullptr));
        menuExportar_Relat_rio->setTitle(QCoreApplication::translate("MainWindow", "Exportar Relat\303\263rio", nullptr));
        menuDepartamentos->setTitle(QCoreApplication::translate("MainWindow", "Departamentos", nullptr));
        menuFuncion_rios->setTitle(QCoreApplication::translate("MainWindow", "Funcion\303\241rios", nullptr));
        menuDocentes->setTitle(QCoreApplication::translate("MainWindow", "Docentes", nullptr));
        menuPesquisar->setTitle(QCoreApplication::translate("MainWindow", "Pesquisar", nullptr));
        menuFuncion_rio_por_ID->setTitle(QCoreApplication::translate("MainWindow", "Funcion\303\241rio", nullptr));
        menuDepartamento_por_ID->setTitle(QCoreApplication::translate("MainWindow", "Departamento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWLBPTMG_H
