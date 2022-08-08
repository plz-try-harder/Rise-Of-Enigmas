/********************************************************************************
** Form generated from reading UI file 'eulergraphsinfoandoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EULERGRAPHSINFOANDOPTIONSWIDGET_H
#define UI_EULERGRAPHSINFOANDOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EulerGraphsInfoAndOptionsWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *EGInfoAndOptionsMainWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *EGstateLabel;
    QPushButton *EGInformationButton;
    QSpacerItem *horizontalSpacer;
    QCheckBox *EGmagnetMode;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *EGchangeLineColorButton;
    QPushButton *EGresetButton;
    QPushButton *EGhomeButton;

    void setupUi(QWidget *EulerGraphsInfoAndOptionsWidget)
    {
        if (EulerGraphsInfoAndOptionsWidget->objectName().isEmpty())
            EulerGraphsInfoAndOptionsWidget->setObjectName(QString::fromUtf8("EulerGraphsInfoAndOptionsWidget"));
        EulerGraphsInfoAndOptionsWidget->resize(1229, 143);
        horizontalLayout_2 = new QHBoxLayout(EulerGraphsInfoAndOptionsWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        EGInfoAndOptionsMainWidget = new QWidget(EulerGraphsInfoAndOptionsWidget);
        EGInfoAndOptionsMainWidget->setObjectName(QString::fromUtf8("EGInfoAndOptionsMainWidget"));
        horizontalLayout_3 = new QHBoxLayout(EGInfoAndOptionsMainWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        EGstateLabel = new QLabel(EGInfoAndOptionsMainWidget);
        EGstateLabel->setObjectName(QString::fromUtf8("EGstateLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EGstateLabel->sizePolicy().hasHeightForWidth());
        EGstateLabel->setSizePolicy(sizePolicy);
        EGstateLabel->setMinimumSize(QSize(300, 0));
        EGstateLabel->setMaximumSize(QSize(0, 16777215));
        QFont font;
        font.setPointSize(14);
        EGstateLabel->setFont(font);
        EGstateLabel->setWordWrap(true);

        horizontalLayout->addWidget(EGstateLabel);

        EGInformationButton = new QPushButton(EGInfoAndOptionsMainWidget);
        EGInformationButton->setObjectName(QString::fromUtf8("EGInformationButton"));
        EGInformationButton->setMinimumSize(QSize(100, 50));

        horizontalLayout->addWidget(EGInformationButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        EGmagnetMode = new QCheckBox(EGInfoAndOptionsMainWidget);
        EGmagnetMode->setObjectName(QString::fromUtf8("EGmagnetMode"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EGmagnetMode->sizePolicy().hasHeightForWidth());
        EGmagnetMode->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        EGmagnetMode->setFont(font1);
        EGmagnetMode->setChecked(true);

        horizontalLayout->addWidget(EGmagnetMode);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        EGchangeLineColorButton = new QPushButton(EGInfoAndOptionsMainWidget);
        EGchangeLineColorButton->setObjectName(QString::fromUtf8("EGchangeLineColorButton"));
        QFont font2;
        font2.setPointSize(11);
        EGchangeLineColorButton->setFont(font2);

        horizontalLayout->addWidget(EGchangeLineColorButton);

        EGresetButton = new QPushButton(EGInfoAndOptionsMainWidget);
        EGresetButton->setObjectName(QString::fromUtf8("EGresetButton"));
        EGresetButton->setFont(font2);

        horizontalLayout->addWidget(EGresetButton);

        EGhomeButton = new QPushButton(EGInfoAndOptionsMainWidget);
        EGhomeButton->setObjectName(QString::fromUtf8("EGhomeButton"));
        sizePolicy1.setHeightForWidth(EGhomeButton->sizePolicy().hasHeightForWidth());
        EGhomeButton->setSizePolicy(sizePolicy1);
        EGhomeButton->setFont(font2);

        horizontalLayout->addWidget(EGhomeButton);


        horizontalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(EGInfoAndOptionsMainWidget);


        retranslateUi(EulerGraphsInfoAndOptionsWidget);

        QMetaObject::connectSlotsByName(EulerGraphsInfoAndOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *EulerGraphsInfoAndOptionsWidget)
    {
        EulerGraphsInfoAndOptionsWidget->setWindowTitle(QCoreApplication::translate("EulerGraphsInfoAndOptionsWidget", "Form", nullptr));
        EGstateLabel->setText(QString());
        EGInformationButton->setText(QCoreApplication::translate("EulerGraphsInfoAndOptionsWidget", "ScoreInformation", nullptr));
        EGmagnetMode->setText(QCoreApplication::translate("EulerGraphsInfoAndOptionsWidget", "Magnetic Mode", nullptr));
        EGchangeLineColorButton->setText(QCoreApplication::translate("EulerGraphsInfoAndOptionsWidget", "Change lines' color...", nullptr));
        EGresetButton->setText(QCoreApplication::translate("EulerGraphsInfoAndOptionsWidget", "Reset Levels", nullptr));
        EGhomeButton->setText(QCoreApplication::translate("EulerGraphsInfoAndOptionsWidget", "Back to Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EulerGraphsInfoAndOptionsWidget: public Ui_EulerGraphsInfoAndOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EULERGRAPHSINFOANDOPTIONSWIDGET_H
