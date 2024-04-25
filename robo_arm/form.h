#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTcpSocket>
#include <QTimer>

namespace Ui {
class Form;
}

extern QTcpSocket* tcpsocket;

class Form : public QMainWindow
{
    Q_OBJECT

public:
    QTcpSocket* my_tcp;
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:

    void on_x_up_pressed();

    void on_x_up_released();

    void on_x_down_pressed();

    void on_x_down_released();

    void on_y_up_pressed();

    void on_y_up_released();

    void on_y_down_pressed();

    void on_y_down_released();

    void on_open_clicked();

    void on_z_up_pressed();

    void on_z_up_released();

    void on_z_down_pressed();

    void on_z_down_released();

    void on_up_pressed();

    void on_up_released();

    void on_down_pressed();

    void on_down_released();

    void on_close_clicked();

private:
    Ui::Form *ui;
    QTimer* timer_xu;
    QTimer* timer_xd;
    QTimer* timer_yu;
    QTimer* timer_yd;
    QTimer* timer_zu;
    QTimer* timer_zd;
    QTimer* timer_up;
    QTimer* timer_do;
    int interval;
    int interval_end;
    int interval_y;
};

#endif // FORM_H
