/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *targetPath;
    QToolButton *targetButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *rulePath;
    QToolButton *ruleButton;
    QSplitter *splitter;
    QTreeWidget *tree;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(602, 304);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        targetPath = new QLineEdit(frame);
        targetPath->setObjectName(QString::fromUtf8("targetPath"));
        targetPath->setReadOnly(true);

        horizontalLayout->addWidget(targetPath);

        targetButton = new QToolButton(frame);
        targetButton->setObjectName(QString::fromUtf8("targetButton"));
        targetButton->setMinimumSize(QSize(75, 0));
        targetButton->setPopupMode(QToolButton::MenuButtonPopup);
        targetButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(targetButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rulePath = new QLineEdit(frame);
        rulePath->setObjectName(QString::fromUtf8("rulePath"));
        rulePath->setReadOnly(true);

        horizontalLayout_2->addWidget(rulePath);

        ruleButton = new QToolButton(frame);
        ruleButton->setObjectName(QString::fromUtf8("ruleButton"));
        ruleButton->setMinimumSize(QSize(75, 0));
        ruleButton->setPopupMode(QToolButton::MenuButtonPopup);
        ruleButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_2->addWidget(ruleButton);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(frame);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        tree = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QString::fromUtf8("tree"));
        splitter->addWidget(tree);

        verticalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "YARA GUI", nullptr));
        targetPath->setPlaceholderText(QApplication::translate("MainWindow", "Select a target file", nullptr));
        rulePath->setPlaceholderText(QApplication::translate("MainWindow", "Select a rule file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
