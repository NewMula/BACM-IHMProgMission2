#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_Conf->setDisabled(true);
    ui->lcdNumber_X->setDisabled(true);
    ui->lcdNumber_Y->setDisabled(true);
    ui->pushButton_Del->setDisabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Conf_clicked()
{

}

