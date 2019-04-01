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
#include <QDirModel>
#include <QVector>

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
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionPreferences;
    QAction *actionCompile;
    QAction *actionCompile_Options;
    QAction *actionDefine_Workspace;
    QAction *actionSave_Debug_Log;
    QAction *actionStep;
    QAction *actionStep_to_Breakpoint;
    QAction *actionStep_Through;
    QAction *actionTrack_Variables;
    QAction *actionCommit_Changes;
    QAction *actionPush_Changes;
    QAction *actionMerge_with_master;
    QAction *actionExit;
    QAction *actionStop;
    QAction *actionPrint_code;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_3;
    QGroupBox *treeBox;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QTabWidget *mainEditTabView;
    QWidget *mainEditTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *mainEdit;
    QGroupBox *varsBox;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *varsText;
    QTabWidget *consoleOutput;
    QWidget *consoleOutputLayout;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *consoleText;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuBuild;
    QMenu *menuView;
    QMenu *menuDebug;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    QString *workspacePath;
    QDirModel *fsmodel;
    QVector<QWidget> tabs;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);

        workspacePath = new QString();
        fsmodel = new QDirModel();

        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/library_add_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/folder_open_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/save_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon2);
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
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/undo_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/redo_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo->setIcon(icon4);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/baseline_file_copy_black_48dp.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/content_cut_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut->setIcon(icon6);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/content_paste_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste->setIcon(icon7);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionCompile = new QAction(MainWindow);
        actionCompile->setObjectName(QString::fromUtf8("actionCompile"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/compile_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCompile->setIcon(icon8);
        actionCompile_Options = new QAction(MainWindow);
        actionCompile_Options->setObjectName(QString::fromUtf8("actionCompile_Options"));
        actionDefine_Workspace = new QAction(MainWindow);
        actionDefine_Workspace->setObjectName(QString::fromUtf8("actionDefine_Workspace"));
        actionSave_Debug_Log = new QAction(MainWindow);
        actionSave_Debug_Log->setObjectName(QString::fromUtf8("actionSave_Debug_Log"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/bug_report_black_48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Debug_Log->setIcon(icon9);
        actionStep = new QAction(MainWindow);
        actionStep->setObjectName(QString::fromUtf8("actionStep"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/skip_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStep->setIcon(icon10);
        actionStep_to_Breakpoint = new QAction(MainWindow);
        actionStep_to_Breakpoint->setObjectName(QString::fromUtf8("actionStep_to_Breakpoint"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/breakpoint_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStep_to_Breakpoint->setIcon(icon11);
        actionStep_Through = new QAction(MainWindow);
        actionStep_Through->setObjectName(QString::fromUtf8("actionStep_Through"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/skip_thru_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStep_Through->setIcon(icon12);
        actionTrack_Variables = new QAction(MainWindow);
        actionTrack_Variables->setObjectName(QString::fromUtf8("actionTrack_Variables"));
        actionCommit_Changes = new QAction(MainWindow);
        actionCommit_Changes->setObjectName(QString::fromUtf8("actionCommit_Changes"));
        actionPush_Changes = new QAction(MainWindow);
        actionPush_Changes->setObjectName(QString::fromUtf8("actionPush_Changes"));
        actionMerge_with_master = new QAction(MainWindow);
        actionMerge_with_master->setObjectName(QString::fromUtf8("actionMerge_with_master"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/exit_to_app_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionExit->setIcon(icon13);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionStop->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/img/stop_black_48x48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStop->setIcon(icon14);
        actionPrint_code = new QAction(MainWindow);
        actionPrint_code->setObjectName(QString::fromUtf8("actionPrint_code"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_3 = new QSplitter(centralWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        treeBox = new QGroupBox(splitter_3);
        treeBox->setObjectName(QString::fromUtf8("treeBox"));
        verticalLayout = new QVBoxLayout(treeBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(treeBox);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout->addWidget(treeView);

        splitter_3->addWidget(treeBox);
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
        mainEditTabView = new QTabWidget(splitter);
        mainEditTabView->setObjectName(QString::fromUtf8("mainEditTabView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainEditTabView->sizePolicy().hasHeightForWidth());
        mainEditTabView->setSizePolicy(sizePolicy2);
        mainEditTabView->setTabShape(QTabWidget::Rounded);
        mainEditTabView->setTabsClosable(true);
        mainEditTabView->setMovable(true);

        (&tabs)->append(QWidget()); // i believe the issue is here

        (&tabs[0])->setObjectName(QString::fromUtf8("mainEditTab"));
        verticalLayout_3 = new QVBoxLayout(&tabs[0]);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mainEdit = new QTextEdit();
        mainEdit->setObjectName(QString::fromUtf8("mainEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Nimbus Mono PS"));
        font.setPointSize(12);
        mainEdit->setFont(font);

        verticalLayout_3->addWidget(mainEdit);

        mainEditTabView->addTab(&tabs[0], QString());
        splitter->addWidget(mainEditTabView);
        varsBox = new QGroupBox(splitter);
        varsBox->setObjectName(QString::fromUtf8("varsBox"));
        verticalLayout_4 = new QVBoxLayout(varsBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        varsText = new QTextEdit(varsBox);
        varsText->setObjectName(QString::fromUtf8("varsText"));
        varsText->setEnabled(true);
        varsText->setReadOnly(true);

        verticalLayout_4->addWidget(varsText);

        splitter->addWidget(varsBox);
        splitter_2->addWidget(splitter);
        consoleOutput = new QTabWidget(splitter_2);
        consoleOutput->setObjectName(QString::fromUtf8("consoleOutput"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(consoleOutput->sizePolicy().hasHeightForWidth());
        consoleOutput->setSizePolicy(sizePolicy3);
        consoleOutput->setTabShape(QTabWidget::Rounded);
        consoleOutput->setTabsClosable(true);
        consoleOutput->setMovable(true);
        consoleOutputLayout = new QWidget();
        consoleOutputLayout->setObjectName(QString::fromUtf8("consoleOutputLayout"));
        verticalLayout_2 = new QVBoxLayout(consoleOutputLayout);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        consoleText = new QPlainTextEdit(consoleOutputLayout);
        consoleText->setObjectName(QString::fromUtf8("consoleText"));
        consoleText->setReadOnly(true);

        verticalLayout_2->addWidget(consoleText);

        consoleOutput->addTab(consoleOutputLayout, QString());
        splitter_2->addWidget(consoleOutput);
        splitter_3->addWidget(splitter_2);

        gridLayout->addWidget(splitter_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QString::fromUtf8("menuBuild"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionPrint_code);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_File);
        menuFile->addAction(actionClose_Project);
        menuFile->addSeparator();
        menuFile->addAction(actionCommit_Changes);
        menuFile->addAction(actionPush_Changes);
        menuFile->addAction(actionMerge_with_master);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuBuild->addAction(actionCompile);
        menuBuild->addAction(actionStop);
        menuBuild->addAction(actionCompile_Options);
        menuBuild->addAction(actionDefine_Workspace);
        menuView->addAction(actionC);
        menuView->addAction(actionCSS);
        menuView->addAction(actionHTML);
        menuView->addAction(actionJava);
        menuView->addAction(actionJavaScript);
        menuView->addAction(actionLaTeX);
        menuView->addAction(actionPHP);
        menuView->addAction(actionPython);
        menuView->addAction(actionSQL);
        menuDebug->addAction(actionSave_Debug_Log);
        menuDebug->addAction(actionStep);
        menuDebug->addAction(actionStep_to_Breakpoint);
        menuDebug->addAction(actionStep_Through);
        menuDebug->addAction(actionTrack_Variables);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionStop);
        mainToolBar->addAction(actionCompile);
        mainToolBar->addAction(actionStep);
        mainToolBar->addAction(actionStep_to_Breakpoint);
        mainToolBar->addAction(actionStep_Through);
        mainToolBar->addAction(actionSave_Debug_Log);

        retranslateUi(MainWindow);

        mainEditTabView->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "coDE", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New Project", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionClose_File->setText(QApplication::translate("MainWindow", "Close file", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose_Project->setText(QApplication::translate("MainWindow", "Close project", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose_Project->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionC->setText(QApplication::translate("MainWindow", "C/C++", nullptr));
        actionCSS->setText(QApplication::translate("MainWindow", "CSS", nullptr));
        actionHTML->setText(QApplication::translate("MainWindow", "HTML", nullptr));
        actionJava->setText(QApplication::translate("MainWindow", "Java", nullptr));
        actionJavaScript->setText(QApplication::translate("MainWindow", "JavaScript", nullptr));
        actionLaTeX->setText(QApplication::translate("MainWindow", "LaTeX", nullptr));
        actionPHP->setText(QApplication::translate("MainWindow", "PHP", nullptr));
        actionPython->setText(QApplication::translate("MainWindow", "Python", nullptr));
        actionSQL->setText(QApplication::translate("MainWindow", "SQL", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", nullptr));
        actionCompile->setText(QApplication::translate("MainWindow", "Compile and run", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCompile->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionCompile_Options->setText(QApplication::translate("MainWindow", "Compile options", nullptr));
        actionDefine_Workspace->setText(QApplication::translate("MainWindow", "Define workspace", nullptr));
        actionSave_Debug_Log->setText(QApplication::translate("MainWindow", "Debug to log", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_Debug_Log->setShortcut(QApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        actionStep->setText(QApplication::translate("MainWindow", "Step", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStep->setShortcut(QApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_NO_SHORTCUT
        actionStep_to_Breakpoint->setText(QApplication::translate("MainWindow", "Step to breakpoint", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStep_to_Breakpoint->setShortcut(QApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_NO_SHORTCUT
        actionStep_Through->setText(QApplication::translate("MainWindow", "Step through", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStep_Through->setShortcut(QApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_NO_SHORTCUT
        actionTrack_Variables->setText(QApplication::translate("MainWindow", "Track variables", nullptr));
        actionCommit_Changes->setText(QApplication::translate("MainWindow", "Commit changes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCommit_Changes->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        actionPush_Changes->setText(QApplication::translate("MainWindow", "Push changes to current branch", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPush_Changes->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionMerge_with_master->setText(QApplication::translate("MainWindow", "Merge with master", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMerge_with_master->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+M", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStop->setShortcut(QApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrint_code->setText(QApplication::translate("MainWindow", "Print code", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPrint_code->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        treeBox->setTitle(QApplication::translate("MainWindow", "Untitled Project", nullptr));
        mainEditTabView->setTabText(mainEditTabView->indexOf(&tabs[0]), QApplication::translate("MainWindow", "Untitled", nullptr));
        varsBox->setTitle(QApplication::translate("MainWindow", "Variables", nullptr));
        consoleOutput->setTabText(consoleOutput->indexOf(consoleOutputLayout), QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "Syntax", nullptr));
        menuDebug->setTitle(QApplication::translate("MainWindow", "Debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
