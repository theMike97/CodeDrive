#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFileSystemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString currentFile;

private slots:
   void on_actionNew_triggered();
   void on_actionOpen_triggered();
   void on_actionSave_triggered();
   void on_actionSave_As_triggered();

private:
    Ui::MainWindow *ui;
    void save_file(QString filename);
};

#endif // MAINWINDOW_H
