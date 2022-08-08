/********************************************************************************
** Form generated from reading UI file 'eulergraphstimechallengewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EULERGRAPHSTIMECHALLENGEWIDGET_H
#define UI_EULERGRAPHSTIMECHALLENGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EulerGraphsTimeChallengeWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *eulerGraphsTimeChallengeStackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *goToChallengePageButton;
    QSpacerItem *horizontalSpacer_8;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *timeElapsedLabel;
    QPushButton *sendScoreButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *recordsButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *EulerGraphsTimeChallengeWidget)
    {
        if (EulerGraphsTimeChallengeWidget->objectName().isEmpty())
            EulerGraphsTimeChallengeWidget->setObjectName(QString::fromUtf8("EulerGraphsTimeChallengeWidget"));
        EulerGraphsTimeChallengeWidget->resize(1245, 100);
        horizontalLayout_2 = new QHBoxLayout(EulerGraphsTimeChallengeWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        eulerGraphsTimeChallengeStackedWidget = new QStackedWidget(EulerGraphsTimeChallengeWidget);
        eulerGraphsTimeChallengeStackedWidget->setObjectName(QString::fromUtf8("eulerGraphsTimeChallengeStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_3 = new QHBoxLayout(page);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        goToChallengePageButton = new QPushButton(page);
        goToChallengePageButton->setObjectName(QString::fromUtf8("goToChallengePageButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(goToChallengePageButton->sizePolicy().hasHeightForWidth());
        goToChallengePageButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        goToChallengePageButton->setFont(font1);

        horizontalLayout_5->addWidget(goToChallengePageButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        eulerGraphsTimeChallengeStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_4 = new QHBoxLayout(page_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startButton = new QPushButton(page_2);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        startButton->setFont(font2);

        horizontalLayout->addWidget(startButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        timeElapsedLabel = new QLabel(page_2);
        timeElapsedLabel->setObjectName(QString::fromUtf8("timeElapsedLabel"));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        timeElapsedLabel->setFont(font3);

        horizontalLayout->addWidget(timeElapsedLabel);

        sendScoreButton = new QPushButton(page_2);
        sendScoreButton->setObjectName(QString::fromUtf8("sendScoreButton"));
        sizePolicy.setHeightForWidth(sendScoreButton->sizePolicy().hasHeightForWidth());
        sendScoreButton->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        sendScoreButton->setFont(font4);

        horizontalLayout->addWidget(sendScoreButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        recordsButton = new QPushButton(page_2);
        recordsButton->setObjectName(QString::fromUtf8("recordsButton"));
        sizePolicy.setHeightForWidth(recordsButton->sizePolicy().hasHeightForWidth());
        recordsButton->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(false);
        recordsButton->setFont(font5);

        horizontalLayout->addWidget(recordsButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        horizontalLayout_4->addLayout(horizontalLayout);

        eulerGraphsTimeChallengeStackedWidget->addWidget(page_2);

        horizontalLayout_2->addWidget(eulerGraphsTimeChallengeStackedWidget);


        retranslateUi(EulerGraphsTimeChallengeWidget);

        eulerGraphsTimeChallengeStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EulerGraphsTimeChallengeWidget);
    } // setupUi

    void retranslateUi(QWidget *EulerGraphsTimeChallengeWidget)
    {
        EulerGraphsTimeChallengeWidget->setWindowTitle(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "If you send your result after the challenge completed, it will be stored online", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "You can practice on those Eulerian Graphs here\n"
"and when you'll be ready, the Online Time Challenge is waiting for you!", nullptr));
        goToChallengePageButton->setText(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "Go to the Challenge \342\206\222", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "If you send your result after the challenge completed, it will be stored online", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "Challenge gamers online on time to finish all levels in a row\n"
"Press Ctrl+SpaceBar or click on 'Start Challenge'", nullptr));
#if QT_CONFIG(tooltip)
        startButton->setToolTip(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "If you send your result after the challenge completed, it will be stored online", nullptr));
#endif // QT_CONFIG(tooltip)
        startButton->setText(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "Start Challenge", nullptr));
        timeElapsedLabel->setText(QString());
#if QT_CONFIG(tooltip)
        sendScoreButton->setToolTip(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "If you send your result after the challenge completed, it will be stored online", nullptr));
#endif // QT_CONFIG(tooltip)
        sendScoreButton->setText(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "Send your time score online...", nullptr));
        recordsButton->setText(QCoreApplication::translate("EulerGraphsTimeChallengeWidget", "View records...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EulerGraphsTimeChallengeWidget: public Ui_EulerGraphsTimeChallengeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EULERGRAPHSTIMECHALLENGEWIDGET_H
