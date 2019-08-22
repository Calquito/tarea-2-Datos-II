#ifndef BT_WINDOW_H
#define BT_WINDOW_H

#include <QDialog>

namespace Ui {
class bt_window;
}

class bt_window : public QDialog
{
    Q_OBJECT

public:
    explicit bt_window(QWidget *parent = nullptr);
    ~bt_window();

private:
    Ui::bt_window *ui;
};

#endif // BT_WINDOW_H
