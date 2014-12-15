/********************************************************************************
** Form generated from reading UI file 'franjas.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRANJAS_H
#define UI_FRANJAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Franjas
{
public:

    void setupUi(QWidget *Franjas)
    {
        if (Franjas->objectName().isEmpty())
            Franjas->setObjectName(QStringLiteral("Franjas"));
        Franjas->resize(640, 480);

        retranslateUi(Franjas);

        QMetaObject::connectSlotsByName(Franjas);
    } // setupUi

    void retranslateUi(QWidget *Franjas)
    {
        Franjas->setWindowTitle(QApplication::translate("Franjas", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Franjas: public Ui_Franjas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRANJAS_H
