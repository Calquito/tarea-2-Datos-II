#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    l_window= new Ll_window(this);

    l_window->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    b_window= new bt_window(this);

    b_window->show();

}
