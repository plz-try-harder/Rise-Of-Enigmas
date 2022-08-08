/********************************************************************************
** Form generated from reading UI file 'menudialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUDIALOG_H
#define UI_MENUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_MenuDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *englishButton;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *frenchButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *EGlineColorButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *EGresetButton;
    QPushButton *quitButton;
    QLabel *label_2;
    QPushButton *aboutButton;
    QPushButton *sourcesButton;

    void setupUi(QDialog *MenuDialog)
    {
        if (MenuDialog->objectName().isEmpty())
            MenuDialog->setObjectName(QString::fromUtf8("MenuDialog"));
        MenuDialog->resize(1762, 440);
        horizontalLayout = new QHBoxLayout(MenuDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(40);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        englishButton = new QPushButton(MenuDialog);
        englishButton->setObjectName(QString::fromUtf8("englishButton"));
        QFont font;
        font.setPointSize(26);
        englishButton->setFont(font);
        englishButton->setText(QString::fromUtf8("English"));

        gridLayout->addWidget(englishButton, 1, 2, 1, 1);

        label = new QLabel(MenuDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setText(QString::fromUtf8("Language"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        frenchButton = new QPushButton(MenuDialog);
        frenchButton->setObjectName(QString::fromUtf8("frenchButton"));
        frenchButton->setFont(font);
        frenchButton->setText(QString::fromUtf8("Fran\303\247ais"));

        gridLayout->addWidget(frenchButton, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        EGlineColorButton = new QPushButton(MenuDialog);
        EGlineColorButton->setObjectName(QString::fromUtf8("EGlineColorButton"));
        EGlineColorButton->setFont(font);

        gridLayout->addWidget(EGlineColorButton, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        EGresetButton = new QPushButton(MenuDialog);
        EGresetButton->setObjectName(QString::fromUtf8("EGresetButton"));
        EGresetButton->setFont(font);

        gridLayout->addWidget(EGresetButton, 2, 3, 1, 1);

        quitButton = new QPushButton(MenuDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setFont(font);

        gridLayout->addWidget(quitButton, 6, 2, 1, 1);

        label_2 = new QLabel(MenuDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        aboutButton = new QPushButton(MenuDialog);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setFont(font);

        gridLayout->addWidget(aboutButton, 3, 1, 1, 1);

        sourcesButton = new QPushButton(MenuDialog);
        sourcesButton->setObjectName(QString::fromUtf8("sourcesButton"));
        sourcesButton->setFont(font);

        gridLayout->addWidget(sourcesButton, 3, 2, 1, 2);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(MenuDialog);

        QMetaObject::connectSlotsByName(MenuDialog);
    } // setupUi

    void retranslateUi(QDialog *MenuDialog)
    {
        MenuDialog->setWindowTitle(QCoreApplication::translate("MenuDialog", "Dialog", nullptr));
        EGlineColorButton->setText(QCoreApplication::translate("MenuDialog", "Change lines' color", nullptr));
        EGresetButton->setText(QCoreApplication::translate("MenuDialog", "Reset Levels", nullptr));
        quitButton->setText(QCoreApplication::translate("MenuDialog", "Quit", nullptr));
        label_2->setText(QCoreApplication::translate("MenuDialog", "Eulerian Graphs", nullptr));
        aboutButton->setText(QCoreApplication::translate("MenuDialog", "About", nullptr));
        sourcesButton->setText(QCoreApplication::translate("MenuDialog", "Sources page on github.com...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuDialog: public Ui_MenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUDIALOG_H
