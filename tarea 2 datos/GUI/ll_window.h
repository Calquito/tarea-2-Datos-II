#ifndef LL_WINDOW_H
#define LL_WINDOW_H

#include <QDialog>

namespace Ui {
class Ll_window;
}

class Ll_window : public QDialog
{
    Q_OBJECT

public:
    explicit Ll_window(QWidget *parent = nullptr);
    ~Ll_window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Ll_window *ui;
};

#endif // LL_WINDOW_H
