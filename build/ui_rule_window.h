/********************************************************************************
** Form generated from reading UI file 'rule_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULE_WINDOW_H
#define UI_RULE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RuleWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QDialogButtonBox *buttonBox;

    void setupUi(QMainWindow *RuleWindow)
    {
        if (RuleWindow->objectName().isEmpty())
            RuleWindow->setObjectName(QString::fromUtf8("RuleWindow"));
        RuleWindow->resize(502, 202);
        centralwidget = new QWidget(RuleWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table = new QTableWidget(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setTextElideMode(Qt::ElideLeft);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(table);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        RuleWindow->setCentralWidget(centralwidget);

        retranslateUi(RuleWindow);

        QMetaObject::connectSlotsByName(RuleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RuleWindow)
    {
        RuleWindow->setWindowTitle(QApplication::translate("RuleWindow", "Rules", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RuleWindow: public Ui_RuleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULE_WINDOW_H
