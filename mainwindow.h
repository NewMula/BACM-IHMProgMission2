#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Conf_clicked();

    void on_pushButton_plusX_clicked();

    void on_pushButton_moinsX_clicked();

    void on_pushButton_plusY_clicked();

    void on_pushButton_moinsY_clicked();

    void on_pushButton_plus10X_clicked();

    void on_pushButton_plus50X_clicked();

    void on_pushButton_moins10X_clicked();

    void on_pushButton_moins50X_clicked();

    void on_pushButton_plus10Y_clicked();

    void on_pushButton_plus50Y_clicked();

    void on_pushButton_moins10Y_clicked();

    void on_pushButton_moins50Y_clicked();

private:
    Ui::MainWindow *ui;
    int valX = 0;
    int valY = 0;
};
#endif // MAINWINDOW_H
