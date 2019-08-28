/********************************************************************************
** Form generated from reading UI file 'target_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGET_PANEL_H
#define UI_TARGET_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TargetPanel
{
public:
    QHBoxLayout *layout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *leftGraph;
    QSlider *slider;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sizeText;
    QProgressBar *progressBar;

    void setupUi(QWidget *TargetPanel)
    {
        if (TargetPanel->objectName().isEmpty())
            TargetPanel->setObjectName(QString::fromUtf8("TargetPanel"));
        TargetPanel->resize(492, 215);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TargetPanel->sizePolicy().hasHeightForWidth());
        TargetPanel->setSizePolicy(sizePolicy);
        layout = new QHBoxLayout(TargetPanel);
        layout->setObjectName(QString::fromUtf8("layout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftFrame = new QFrame(TargetPanel);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        leftFrame->setFrameShape(QFrame::NoFrame);
        leftFrame->setFrameShadow(QFrame::Plain);
        leftFrame->setLineWidth(0);
        horizontalLayout_4 = new QHBoxLayout(leftFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        leftGraph = new QLabel(leftFrame);
        leftGraph->setObjectName(QString::fromUtf8("leftGraph"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftGraph->sizePolicy().hasHeightForWidth());
        leftGraph->setSizePolicy(sizePolicy1);
        leftGraph->setMinimumSize(QSize(1, 1));
        leftGraph->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(leftGraph);


        horizontalLayout->addWidget(leftFrame);

        slider = new QSlider(TargetPanel);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimum(1);
        slider->setMaximum(99);
        slider->setTracking(true);
        slider->setOrientation(Qt::Vertical);
        slider->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(slider);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sizeText = new QLineEdit(TargetPanel);
        sizeText->setObjectName(QString::fromUtf8("sizeText"));
        sizeText->setMaximumSize(QSize(16777215, 16));
        QFont font;
        font.setPointSize(8);
        sizeText->setFont(font);
        sizeText->setReadOnly(true);

        horizontalLayout_2->addWidget(sizeText);

        progressBar = new QProgressBar(TargetPanel);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMaximumSize(QSize(16777215, 16));
        progressBar->setFont(font);
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 1);

        layout->addLayout(verticalLayout);


        retranslateUi(TargetPanel);

        QMetaObject::connectSlotsByName(TargetPanel);
    } // setupUi

    void retranslateUi(QWidget *TargetPanel)
    {
        TargetPanel->setWindowTitle(QApplication::translate("TargetPanel", "Form", nullptr));
        leftGraph->setText(QString());
        sizeText->setText(QApplication::translate("TargetPanel", "Size: 65536 bytes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TargetPanel: public Ui_TargetPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGET_PANEL_H
