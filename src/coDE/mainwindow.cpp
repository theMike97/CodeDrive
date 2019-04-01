#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    currentFile = "Untitled";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::save_file(QString filename) //default to Untitled.  Runs after specifications for "Save as"
{
    QFile file(filename);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: ", file.errorString());
        return;
    }
    currentFile = filename;
    QTextStream out(&file);
    QString saved_text = ui->mainEdit->toPlainText();
    out << saved_text;
    file.close();
}

// TODO
void MainWindow::on_actionNew_triggered()
{
    *ui->workspacePath = "/home/mike/git/CodeDrive/src/coDE/testProj"; // set workspacePath first
    ui->mainEdit->setText(QString()); // create blank start document
//    save_file("Untitled"); // save temporarily
    QString title = QString("coDE - %1").arg("Test Project"); // set to current project later
    setWindowTitle(title);

    // change tree group text
    ui->treeBox->setTitle(QString("Test Project")); // replace with chosen project name

    // set up treeview
    ui->fsmodel->setParent(this);
    QModelIndex modelIndex = ui->fsmodel->index(*ui->workspacePath);
    ui->treeView->setModel(ui->fsmodel);
    ui->treeView->setRootIndex(modelIndex);
    ui->treeView->header()->hide();
//    ui->fsmodel->setReadOnly(false);
    for (int i = 1; i <= ui->fsmodel->columnCount(); i++)
        ui->treeView->hideColumn(i);
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename =QFileDialog::getOpenFileName(this, "Open Project");
    QFile file(filename);
    currentFile = filename;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    QString title = QString("coDE - %1").arg("Test Project"); // set to current project later
    setWindowTitle(title);
    // change tab title
    QTextStream in(&file);
    QString text = in.readAll();
    ui->mainEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered()
{
    save_file(currentFile);
}

void MainWindow::on_actionSave_As_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as");
    printf("%s\n",filename.toLocal8Bit().data());
    save_file(filename);
}
