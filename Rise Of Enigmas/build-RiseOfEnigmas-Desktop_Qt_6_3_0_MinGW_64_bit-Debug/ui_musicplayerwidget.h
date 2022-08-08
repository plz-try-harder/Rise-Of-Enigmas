/********************************************************************************
** Form generated from reading UI file 'musicplayerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYERWIDGET_H
#define UI_MUSICPLAYERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlayerWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *musicPlayerMainWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *musicTitleLabel;
    QSlider *positionSlider;
    QPushButton *pushButton;
    QSlider *volumeSlider;
    QComboBox *comboBox;

    void setupUi(QWidget *MusicPlayerWidget)
    {
        if (MusicPlayerWidget->objectName().isEmpty())
            MusicPlayerWidget->setObjectName(QString::fromUtf8("MusicPlayerWidget"));
        MusicPlayerWidget->resize(1225, 62);
        horizontalLayout_2 = new QHBoxLayout(MusicPlayerWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        musicPlayerMainWidget = new QWidget(MusicPlayerWidget);
        musicPlayerMainWidget->setObjectName(QString::fromUtf8("musicPlayerMainWidget"));
        horizontalLayout_3 = new QHBoxLayout(musicPlayerMainWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(musicPlayerMainWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        label->setText(QString::fromUtf8("Now playing :"));

        horizontalLayout->addWidget(label);

        musicTitleLabel = new QLabel(musicPlayerMainWidget);
        musicTitleLabel->setObjectName(QString::fromUtf8("musicTitleLabel"));

        horizontalLayout->addWidget(musicTitleLabel);

        positionSlider = new QSlider(musicPlayerMainWidget);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setMaximum(9999);
        positionSlider->setPageStep(30);
        positionSlider->setTracking(false);
        positionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(positionSlider);

        pushButton = new QPushButton(musicPlayerMainWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        volumeSlider = new QSlider(musicPlayerMainWidget);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy1);
        volumeSlider->setMaximum(100);
        volumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(volumeSlider);

        comboBox = new QComboBox(musicPlayerMainWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(musicPlayerMainWidget);


        retranslateUi(MusicPlayerWidget);

        QMetaObject::connectSlotsByName(MusicPlayerWidget);
    } // setupUi

    void retranslateUi(QWidget *MusicPlayerWidget)
    {
        MusicPlayerWidget->setWindowTitle(QCoreApplication::translate("MusicPlayerWidget", "Form", nullptr));
        musicTitleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MusicPlayerWidget: public Ui_MusicPlayerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYERWIDGET_H
