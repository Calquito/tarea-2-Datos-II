#include "ll_window.h"
#include "ui_ll_window.h"
#include "client.h"

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

void Ll_window::on_pushButton_clicked()
{
    QString agregar_line = ui->lineedit1-> text();
    std::string agregar_line_string = agregar_line.toStdString();
    char* agregar_line_char = &agregar_line_string[0];

    std::string ip_string="127.0.0.1";
    char* ip_char=&ip_string[0] ;

    std::string puerto_string="8080";
    char* puerto_char=&puerto_string[0];

    run_client(ip_char,puerto_char,agregar_line_char);
}
