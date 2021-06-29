#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionBold_triggered()
{
ui->textEdit->setFontWeight(QFont::Bold);
}


void MainWindow::on_actionNormal_triggered()
{
ui->textEdit->setFontWeight(QFont::Normal);
}


void MainWindow::on_actionSubscript_triggered()
{
    QTextCharFormat format;
       format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
       if(ui->textEdit->hasFocus())
          ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_actionSuperscript_triggered()
{
    QTextCharFormat format;
       format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
       if(ui->textEdit->hasFocus())
          ui->textEdit->mergeCurrentCharFormat(format);
}


void MainWindow::on_pushButton_clicked()
{
    Dialog dia;
    dia.setModal(true);
    dia.exec();
}

