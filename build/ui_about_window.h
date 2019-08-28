/********************************************************************************
** Form generated from reading UI file 'about_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_WINDOW_H
#define UI_ABOUT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *gfx;
    QTextBrowser *info;

    void setupUi(QMainWindow *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QString::fromUtf8("AboutWindow"));
        AboutWindow->resize(338, 222);
        centralwidget = new QWidget(AboutWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gfx = new QLabel(centralwidget);
        gfx->setObjectName(QString::fromUtf8("gfx"));
        gfx->setMinimumSize(QSize(320, 100));
        gfx->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(gfx);

        info = new QTextBrowser(centralwidget);
        info->setObjectName(QString::fromUtf8("info"));
        info->setOpenExternalLinks(true);

        verticalLayout->addWidget(info);

        AboutWindow->setCentralWidget(centralwidget);

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "About", nullptr));
        gfx->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_WINDOW_H
