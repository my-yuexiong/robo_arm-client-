#ifndef TCP_H
#define TCP_H

#include <QWidget>
#include "form.h"
//#include "mainwindow.h"
#include <QHostAddress>
#include <QTcpSocket>


namespace Ui {
class Tcp;
}

class Tcp : public QWidget
{
    Q_OBJECT

public:
    explicit Tcp(QWidget *parent = nullptr);
    ~Tcp();

private slots:


    void on_armStart_clicked();

    void on_connect_clicked();

    void on_disconnnect_clicked();

private:
    Ui::Tcp *ui;
    Form* form;
    QTcpSocket* tcpsocket;
};

#endif // TCP_H
