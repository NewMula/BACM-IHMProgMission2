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

    //CONF BUTTON

}


void MainWindow::on_pushButton_plusX_clicked()
{
    valX = valX + 1;


    if (valX <= 250 && valX >= -250)
    {
      ui->lcdNumber_X->display(valX);
    }
    if (valX > 250)
    {
        valX = 250;
    }
    if (valX < -250)
    {
        valX = -250;
    }

void MainWindow::on_pushButton_plus10X_clicked()
{
    if (valX < 250 && valX > -250)
    {
        valX = valX + 10;
        ui->lcdNumber_X->display(valX);
    }
}
void MainWindow::on_pushButton_plus50X_clicked()
{
    if (valX < 250 && valX > -250)
    {
        valX = valX + 50;
        ui->lcdNumber_X->display(valX);
    }
}


void MainWindow::on_pushButton_moinsX_clicked()
{
    if (valX < 250 && valX > -250)
    {
        valX = valX - 1;
        ui->lcdNumber_X->display(valX);
    }
}
void MainWindow::on_pushButton_moins10X_clicked()
{
    if (valX < 250 && valX > -250)
    {
        valX = valX - 10;
        ui->lcdNumber_X->display(valX);
    }
}
void MainWindow::on_pushButton_moins50X_clicked()
{
    if (valX < 250 && valX > -250)
    {
        valX = valX - 50;
        ui->lcdNumber_X->display(valX);
    }
}


void MainWindow::on_pushButton_plusY_clicked()
{
    if (valY < 250 && valY > -250)
    {
        valY= valY + 1;
        ui->lcdNumber_Y->display(valY);
    }
}
void MainWindow::on_pushButton_plus10Y_clicked()
{
    if (valY < 250 && valY > -250)
    {
        valY= valY + 10;
        ui->lcdNumber_Y->display(valY);
    }
}
void MainWindow::on_pushButton_plus50Y_clicked()
{
    if (valY < 250 && valY > -250)
    {
        valY= valY + 50;
        ui->lcdNumber_Y->display(valY);
    }
}


void MainWindow::on_pushButton_moinsY_clicked()
{
    if (valY < 250 && valY > -250)
    {
        valY= valY - 1;
        ui->lcdNumber_Y->display(valY);
    }
}
void MainWindow::on_pushButton_moins10Y_clicked()
{
    if (valY < 250 && valY > -250)
    {
        valY= valY - 10;
        ui->lcdNumber_Y->display(valY);
    };
}
void MainWindow::on_pushButton_moins50Y_clicked()
{
    if (valY < 250 && valY > -250)
    {
        valY= valY - 50;
        ui->lcdNumber_Y->display(valY);
    }
}

