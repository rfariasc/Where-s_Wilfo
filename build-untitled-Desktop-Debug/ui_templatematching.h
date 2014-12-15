/********************************************************************************
** Form generated from reading UI file 'templatematching.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEMATCHING_H
#define UI_TEMPLATEMATCHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemplateMatching
{
public:

    void setupUi(QWidget *TemplateMatching)
    {
        if (TemplateMatching->objectName().isEmpty())
            TemplateMatching->setObjectName(QStringLiteral("TemplateMatching"));
        TemplateMatching->resize(640, 480);

        retranslateUi(TemplateMatching);

        QMetaObject::connectSlotsByName(TemplateMatching);
    } // setupUi

    void retranslateUi(QWidget *TemplateMatching)
    {
        TemplateMatching->setWindowTitle(QApplication::translate("TemplateMatching", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class TemplateMatching: public Ui_TemplateMatching {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEMATCHING_H
