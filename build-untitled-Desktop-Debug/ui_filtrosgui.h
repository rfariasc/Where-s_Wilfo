/********************************************************************************
** Form generated from reading UI file 'filtrosgui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTROSGUI_H
#define UI_FILTROSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiltrosGUI
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FiltrosGUI)
    {
        if (FiltrosGUI->objectName().isEmpty())
            FiltrosGUI->setObjectName(QStringLiteral("FiltrosGUI"));
        FiltrosGUI->resize(1000, 661);
        centralwidget = new QWidget(FiltrosGUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 70, 311, 511));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 309, 509));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(360, 70, 281, 511));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 279, 509));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        scrollArea_3 = new QScrollArea(centralwidget);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(670, 70, 311, 511));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 309, 509));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 50, 91, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(426, 50, 161, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(746, 50, 181, 20));
        FiltrosGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FiltrosGUI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 20));
        FiltrosGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(FiltrosGUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FiltrosGUI->setStatusBar(statusbar);

        retranslateUi(FiltrosGUI);

        QMetaObject::connectSlotsByName(FiltrosGUI);
    } // setupUi

    void retranslateUi(QMainWindow *FiltrosGUI)
    {
        FiltrosGUI->setWindowTitle(QApplication::translate("FiltrosGUI", "Filtros", 0));
        label->setText(QApplication::translate("FiltrosGUI", "Filtro: Franjas", 0));
        label_2->setText(QApplication::translate("FiltrosGUI", "Filtro: Template Matching", 0));
        label_3->setText(QApplication::translate("FiltrosGUI", "Filtro: Matching Histogramas", 0));
    } // retranslateUi

};

namespace Ui {
    class FiltrosGUI: public Ui_FiltrosGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTROSGUI_H
