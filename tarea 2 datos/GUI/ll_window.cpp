#include "ll_window.h"
#include "ui_ll_window.h"

Ll_window::Ll_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ll_window)
{
    ui->setupUi(this);
}

Ll_window::~Ll_window()
{
    delete ui;
}
