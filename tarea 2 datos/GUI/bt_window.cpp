#include "bt_window.h"
#include "ui_bt_window.h"

bt_window::bt_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bt_window)
{
    ui->setupUi(this);
}

bt_window::~bt_window()
{
    delete ui;
}
