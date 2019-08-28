/********************************************************************************
** Form generated from reading UI file 'compile_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILE_WINDOW_H
#define UI_COMPILE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompileWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *rulePath;
    QTextEdit *output;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *compileButton;
    QPushButton *closeButton;

    void setupUi(QMainWindow *CompileWindow)
    {
        if (CompileWindow->objectName().isEmpty())
            CompileWindow->setObjectName(QString::fromUtf8("CompileWindow"));
        CompileWindow->resize(521, 243);
        centralwidget = new QWidget(CompileWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rulePath = new QLineEdit(centralwidget);
        rulePath->setObjectName(QString::fromUtf8("rulePath"));
        rulePath->setReadOnly(true);

        verticalLayout->addWidget(rulePath);

        output = new QTextEdit(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setLineWrapMode(QTextEdit::NoWrap);
        output->setReadOnly(true);

        verticalLayout->addWidget(output);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        compileButton = new QPushButton(centralwidget);
        compileButton->setObjectName(QString::fromUtf8("compileButton"));

        horizontalLayout->addWidget(compileButton);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);

        CompileWindow->setCentralWidget(centralwidget);

        retranslateUi(CompileWindow);

        QMetaObject::connectSlotsByName(CompileWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CompileWindow)
    {
        CompileWindow->setWindowTitle(QApplication::translate("CompileWindow", "Compiler", nullptr));
        compileButton->setText(QApplication::translate("CompileWindow", "&Recompile", nullptr));
        closeButton->setText(QApplication::translate("CompileWindow", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompileWindow: public Ui_CompileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILE_WINDOW_H
