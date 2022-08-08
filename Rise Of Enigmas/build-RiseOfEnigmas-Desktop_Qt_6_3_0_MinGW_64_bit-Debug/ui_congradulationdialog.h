/********************************************************************************
** Form generated from reading UI file 'congradulationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONGRADULATIONDIALOG_H
#define UI_CONGRADULATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CongradulationDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *CongradulationDialog)
    {
        if (CongradulationDialog->objectName().isEmpty())
            CongradulationDialog->setObjectName(QString::fromUtf8("CongradulationDialog"));
        CongradulationDialog->resize(1062, 622);
        horizontalLayout_2 = new QHBoxLayout(CongradulationDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(CongradulationDialog);

        QMetaObject::connectSlotsByName(CongradulationDialog);
    } // setupUi

    void retranslateUi(QDialog *CongradulationDialog)
    {
        CongradulationDialog->setWindowTitle(QCoreApplication::translate("CongradulationDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CongradulationDialog: public Ui_CongradulationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONGRADULATIONDIALOG_H
