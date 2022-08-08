/********************************************************************************
** Form generated from reading UI file 'eulergraphstimechallengerecordsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EULERGRAPHSTIMECHALLENGERECORDSDIALOG_H
#define UI_EULERGRAPHSTIMECHALLENGERECORDSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EulerGraphsTimeChallengeRecordsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EulerGraphsTimeChallengeRecordsDialog)
    {
        if (EulerGraphsTimeChallengeRecordsDialog->objectName().isEmpty())
            EulerGraphsTimeChallengeRecordsDialog->setObjectName(QString::fromUtf8("EulerGraphsTimeChallengeRecordsDialog"));
        EulerGraphsTimeChallengeRecordsDialog->resize(716, 537);
        verticalLayout = new QVBoxLayout(EulerGraphsTimeChallengeRecordsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(EulerGraphsTimeChallengeRecordsDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        buttonBox = new QDialogButtonBox(EulerGraphsTimeChallengeRecordsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EulerGraphsTimeChallengeRecordsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EulerGraphsTimeChallengeRecordsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EulerGraphsTimeChallengeRecordsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EulerGraphsTimeChallengeRecordsDialog);
    } // setupUi

    void retranslateUi(QDialog *EulerGraphsTimeChallengeRecordsDialog)
    {
        EulerGraphsTimeChallengeRecordsDialog->setWindowTitle(QCoreApplication::translate("EulerGraphsTimeChallengeRecordsDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EulerGraphsTimeChallengeRecordsDialog: public Ui_EulerGraphsTimeChallengeRecordsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EULERGRAPHSTIMECHALLENGERECORDSDIALOG_H
