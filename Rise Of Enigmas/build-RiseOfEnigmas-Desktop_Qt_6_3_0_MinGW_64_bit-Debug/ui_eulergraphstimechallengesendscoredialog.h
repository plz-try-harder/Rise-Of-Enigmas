/********************************************************************************
** Form generated from reading UI file 'eulergraphstimechallengesendscoredialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EULERGRAPHSTIMECHALLENGESENDSCOREDIALOG_H
#define UI_EULERGRAPHSTIMECHALLENGESENDSCOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EulerGraphsTimeChallengeSendScoreDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *pseudoLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *timeScoreLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *errorLabel;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EulerGraphsTimeChallengeSendScoreDialog)
    {
        if (EulerGraphsTimeChallengeSendScoreDialog->objectName().isEmpty())
            EulerGraphsTimeChallengeSendScoreDialog->setObjectName(QString::fromUtf8("EulerGraphsTimeChallengeSendScoreDialog"));
        EulerGraphsTimeChallengeSendScoreDialog->resize(312, 258);
        verticalLayout_2 = new QVBoxLayout(EulerGraphsTimeChallengeSendScoreDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(EulerGraphsTimeChallengeSendScoreDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(EulerGraphsTimeChallengeSendScoreDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pseudoLineEdit = new QLineEdit(EulerGraphsTimeChallengeSendScoreDialog);
        pseudoLineEdit->setObjectName(QString::fromUtf8("pseudoLineEdit"));

        horizontalLayout_2->addWidget(pseudoLineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(EulerGraphsTimeChallengeSendScoreDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(7);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        timeScoreLabel = new QLabel(EulerGraphsTimeChallengeSendScoreDialog);
        timeScoreLabel->setObjectName(QString::fromUtf8("timeScoreLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        timeScoreLabel->setFont(font1);
        timeScoreLabel->setText(QString::fromUtf8("999.9 seconds"));
        timeScoreLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(timeScoreLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        errorLabel = new QLabel(EulerGraphsTimeChallengeSendScoreDialog);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        QFont font2;
        font2.setPointSize(10);
        errorLabel->setFont(font2);
        errorLabel->setScaledContents(true);
        errorLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(errorLabel);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EulerGraphsTimeChallengeSendScoreDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(EulerGraphsTimeChallengeSendScoreDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EulerGraphsTimeChallengeSendScoreDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EulerGraphsTimeChallengeSendScoreDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EulerGraphsTimeChallengeSendScoreDialog);
    } // setupUi

    void retranslateUi(QDialog *EulerGraphsTimeChallengeSendScoreDialog)
    {
        EulerGraphsTimeChallengeSendScoreDialog->setWindowTitle(QCoreApplication::translate("EulerGraphsTimeChallengeSendScoreDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EulerGraphsTimeChallengeSendScoreDialog", "Your time score will be stored online", nullptr));
        label_2->setText(QCoreApplication::translate("EulerGraphsTimeChallengeSendScoreDialog", "Pseudonym for this score", nullptr));
        label_3->setText(QCoreApplication::translate("EulerGraphsTimeChallengeSendScoreDialog", "Alphanumerical, space and dash characters only", nullptr));
        errorLabel->setText(QCoreApplication::translate("EulerGraphsTimeChallengeSendScoreDialog", "No error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EulerGraphsTimeChallengeSendScoreDialog: public Ui_EulerGraphsTimeChallengeSendScoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EULERGRAPHSTIMECHALLENGESENDSCOREDIALOG_H
