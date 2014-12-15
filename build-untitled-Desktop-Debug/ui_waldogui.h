/********************************************************************************
** Form generated from reading UI file 'waldogui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALDOGUI_H
#define UI_WALDOGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaldoGUI
{
public:
    QAction *actionSalir;
    QAction *actionAcerca_de;
    QAction *actionVerFiltros;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuHelp;
    QMenu *menuFiltros;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WaldoGUI)
    {
        if (WaldoGUI->objectName().isEmpty())
            WaldoGUI->setObjectName(QStringLiteral("WaldoGUI"));
        WaldoGUI->resize(1027, 507);
        actionSalir = new QAction(WaldoGUI);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionAcerca_de = new QAction(WaldoGUI);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        actionVerFiltros = new QAction(WaldoGUI);
        actionVerFiltros->setObjectName(QStringLiteral("actionVerFiltros"));
        centralWidget = new QWidget(WaldoGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 20, 451, 361));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 359));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(520, 20, 461, 361));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 459, 359));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(138, 400, 121, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 400, 121, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(530, 410, 471, 20));
        WaldoGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WaldoGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1027, 20));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuFiltros = new QMenu(menuBar);
        menuFiltros->setObjectName(QStringLiteral("menuFiltros"));
        WaldoGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WaldoGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WaldoGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WaldoGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WaldoGUI->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuFiltros->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuArchivo->addAction(actionSalir);
        menuHelp->addAction(actionAcerca_de);
        menuFiltros->addAction(actionVerFiltros);

        retranslateUi(WaldoGUI);
        QObject::connect(actionSalir, SIGNAL(triggered()), WaldoGUI, SLOT(close()));

        QMetaObject::connectSlotsByName(WaldoGUI);
    } // setupUi

    void retranslateUi(QMainWindow *WaldoGUI)
    {
        WaldoGUI->setWindowTitle(QApplication::translate("WaldoGUI", "WaldoGUI", 0));
        actionSalir->setText(QApplication::translate("WaldoGUI", "Salir", 0));
        actionAcerca_de->setText(QApplication::translate("WaldoGUI", "Acerca de...", 0));
        actionVerFiltros->setText(QApplication::translate("WaldoGUI", "VerFiltros", 0));
        pushButton->setText(QApplication::translate("WaldoGUI", "Cargar Imagen", 0));
        pushButton_2->setText(QApplication::translate("WaldoGUI", "WebCam", 0));
        label->setText(QString());
        menuArchivo->setTitle(QApplication::translate("WaldoGUI", "Archivo", 0));
        menuHelp->setTitle(QApplication::translate("WaldoGUI", "Ayuda", 0));
        menuFiltros->setTitle(QApplication::translate("WaldoGUI", "Filtros", 0));
    } // retranslateUi

};

namespace Ui {
    class WaldoGUI: public Ui_WaldoGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALDOGUI_H
