/********************************************************************************
** Form generated from reading UI file 'match_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCH_PANEL_H
#define UI_MATCH_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MatchPanel
{
public:
    QHBoxLayout *layout;
    QTableWidget *table;

    void setupUi(QWidget *MatchPanel)
    {
        if (MatchPanel->objectName().isEmpty())
            MatchPanel->setObjectName(QString::fromUtf8("MatchPanel"));
        MatchPanel->resize(585, 193);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MatchPanel->sizePolicy().hasHeightForWidth());
        MatchPanel->setSizePolicy(sizePolicy);
        layout = new QHBoxLayout(MatchPanel);
        layout->setObjectName(QString::fromUtf8("layout"));
        table = new QTableWidget(MatchPanel);
        table->setObjectName(QString::fromUtf8("table"));
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        layout->addWidget(table);


        retranslateUi(MatchPanel);

        QMetaObject::connectSlotsByName(MatchPanel);
    } // setupUi

    void retranslateUi(QWidget *MatchPanel)
    {
        MatchPanel->setWindowTitle(QApplication::translate("MatchPanel", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatchPanel: public Ui_MatchPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCH_PANEL_H
