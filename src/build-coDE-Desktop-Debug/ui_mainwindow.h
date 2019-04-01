/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionClose_File;
    QAction *actionClose_Project;
    QAction *actionC;
    QAction *actionCSS;
    QAction *actionHTML;
    QAction *actionJava;
    QAction *actionJavaScript;
    QAction *actionLaTeX;
    QAction *actionPHP;
    QAction *actionPython;
    QAction *actionSQL;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_2;
    QTabWidget *ConsoleOutput;
    QWidget *ConsoleOutput1;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menutest;
    QMenu *menuEdit;
    QMenu *menuBuild;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionClose_File = new QAction(MainWindow);
        actionClose_File->setObjectName(QString::fromUtf8("actionClose_File"));
        actionClose_Project = new QAction(MainWindow);
        actionClose_Project->setObjectName(QString::fromUtf8("actionClose_Project"));
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QString::fromUtf8("actionC"));
        actionC->setCheckable(true);
        actionCSS = new QAction(MainWindow);
        actionCSS->setObjectName(QString::fromUtf8("actionCSS"));
        actionCSS->setCheckable(true);
        actionHTML = new QAction(MainWindow);
        actionHTML->setObjectName(QString::fromUtf8("actionHTML"));
        actionHTML->setCheckable(true);
        actionJava = new QAction(MainWindow);
        actionJava->setObjectName(QString::fromUtf8("actionJava"));
        actionJava->setCheckable(true);
        actionJavaScript = new QAction(MainWindow);
        actionJavaScript->setObjectName(QString::fromUtf8("actionJavaScript"));
        actionJavaScript->setCheckable(true);
        actionLaTeX = new QAction(MainWindow);
        actionLaTeX->setObjectName(QString::fromUtf8("actionLaTeX"));
        actionLaTeX->setCheckable(true);
        actionPHP = new QAction(MainWindow);
        actionPHP->setObjectName(QString::fromUtf8("actionPHP"));
        actionPHP->setCheckable(true);
        actionPython = new QAction(MainWindow);
        actionPython->setObjectName(QString::fromUtf8("actionPython"));
        actionPython->setCheckable(true);
        actionSQL = new QAction(MainWindow);
        actionSQL->setObjectName(QString::fromUtf8("actionSQL"));
        actionSQL->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_3 = new QSplitter(centralWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(splitter_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(groupBox_2);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout->addWidget(treeView);

        splitter_3->addWidget(groupBox_2);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Nimbus Mono PS"));
        font.setPointSize(12);
        textEdit->setFont(font);

        verticalLayout_3->addWidget(textEdit);

        tabWidget->addTab(tab, QString());
        splitter->addWidget(tabWidget);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(true);
        textEdit_2->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_2);

        splitter->addWidget(groupBox);
        splitter_2->addWidget(splitter);
        ConsoleOutput = new QTabWidget(splitter_2);
        ConsoleOutput->setObjectName(QString::fromUtf8("ConsoleOutput"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ConsoleOutput->sizePolicy().hasHeightForWidth());
        ConsoleOutput->setSizePolicy(sizePolicy3);
        ConsoleOutput->setTabShape(QTabWidget::Rounded);
        ConsoleOutput->setTabsClosable(true);
        ConsoleOutput->setMovable(true);
        ConsoleOutput1 = new QWidget();
        ConsoleOutput1->setObjectName(QString::fromUtf8("ConsoleOutput1"));
        verticalLayout_2 = new QVBoxLayout(ConsoleOutput1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(ConsoleOutput1);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        verticalLayout_2->addWidget(plainTextEdit);

        ConsoleOutput->addTab(ConsoleOutput1, QString());
        splitter_2->addWidget(ConsoleOutput);
        splitter_3->addWidget(splitter_2);

        gridLayout->addWidget(splitter_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menutest = new QMenu(menuBar);
        menutest->setObjectName(QString::fromUtf8("menutest"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QString::fromUtf8("menuBuild"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menutest->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menutest->addAction(actionNew);
        menutest->addAction(actionOpen);
        menutest->addSeparator();
        menutest->addAction(actionSave);
        menutest->addAction(actionSave_As);
        menutest->addSeparator();
        menutest->addAction(actionClose_File);
        menutest->addAction(actionClose_Project);
        menuView->addAction(actionC);
        menuView->addAction(actionCSS);
        menuView->addAction(actionHTML);
        menuView->addAction(actionJava);
        menuView->addAction(actionJavaScript);
        menuView->addAction(actionLaTeX);
        menuView->addAction(actionPHP);
        menuView->addAction(actionPython);
        menuView->addAction(actionSQL);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "coDE", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionClose_File->setText(QApplication::translate("MainWindow", "Close File", nullptr));
        actionClose_Project->setText(QApplication::translate("MainWindow", "Close Project", nullptr));
        actionC->setText(QApplication::translate("MainWindow", "C/C++", nullptr));
        actionCSS->setText(QApplication::translate("MainWindow", "CSS", nullptr));
        actionHTML->setText(QApplication::translate("MainWindow", "HTML", nullptr));
        actionJava->setText(QApplication::translate("MainWindow", "Java", nullptr));
        actionJavaScript->setText(QApplication::translate("MainWindow", "JavaScript", nullptr));
        actionLaTeX->setText(QApplication::translate("MainWindow", "LaTeX", nullptr));
        actionPHP->setText(QApplication::translate("MainWindow", "PHP", nullptr));
        actionPython->setText(QApplication::translate("MainWindow", "Python", nullptr));
        actionSQL->setText(QApplication::translate("MainWindow", "SQL", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Untitled Project", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Nimbus Mono PS'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Consolas'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Untitled", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Variables", nullptr));
        ConsoleOutput->setTabText(ConsoleOutput->indexOf(ConsoleOutput1), QApplication::translate("MainWindow", "Page", nullptr));
        menutest->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "Syntax", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
