#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Form)
{
    QTransform transform;
    transform.rotate(-90);

    ui->setupUi(this);
    timer_xu = new QTimer(this);
    timer_xd = new QTimer(this);
    timer_yu = new QTimer(this);
    timer_yd = new QTimer(this);
    timer_zu = new QTimer(this);
    timer_zd = new QTimer(this);
    timer_up = new QTimer(this);
    timer_do = new QTimer(this);
    interval = 100;//每次发送时间间隔
    interval_end = 100;
    interval_y = 500;

    connect(timer_xu,&QTimer::timeout,this,[=](){
        QString message = "#Xup";
        my_tcp->write(message.toUtf8());
    });
    connect(timer_xd,&QTimer::timeout,this,[=](){
        QString message = "#Xdo";
        my_tcp->write(message.toUtf8());
    });
    connect(timer_yu,&QTimer::timeout,this,[=](){
        QString message = "#Yup";
        my_tcp->write(message.toUtf8());
    });
    connect(timer_yd,&QTimer::timeout,this,[=](){
        QString message = "#Ydo";
        my_tcp->write(message.toUtf8());
    });
    connect(timer_zu,&QTimer::timeout,this,[=](){
        QString message = "#Zup";
        my_tcp->write(message.toUtf8());
    });
    connect(timer_zd,&QTimer::timeout,this,[=](){
        QString message = "#Zdo";
        my_tcp->write(message.toUtf8());
    });
    connect(timer_up,&QTimer::timeout,this,[=](){
        QString message = "#up#";
        my_tcp->write(message.toUtf8());
    });
    connect(timer_do,&QTimer::timeout,this,[=](){
        QString message = "#do#";
        my_tcp->write(message.toUtf8());
    });
}

Form::~Form()
{
    delete ui;
}

void Form::on_x_up_pressed()
{
//    QString message = "#Xup";
//    my_tcp->write(message.toUtf8());
    timer_xu->start(interval);
}

void Form::on_x_up_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_xu->stop();
}

void Form::on_x_down_pressed()
{
//    QString message = "#Xdo";
//    my_tcp->write(message.toUtf8());
    timer_xd->start(interval);
}

void Form::on_x_down_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_xd->stop();
}

void Form::on_y_up_pressed()
{
//    QString message = "#Yup";
//    my_tcp->write(message.toUtf8());
    timer_yu->start(interval_y);
}

void Form::on_y_up_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_yu->stop();
}

void Form::on_y_down_pressed()
{
//    QString message = "#Ydo";
//    my_tcp->write(message.toUtf8());
    timer_yd->start(interval_y);
}

void Form::on_y_down_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_yd->stop();
}

void Form::on_open_clicked()
{
    QString message = "#ope";
    my_tcp->write(message.toUtf8());
}

void Form::on_z_up_pressed()
{
//    QString message = "#Zup";
//    my_tcp->write(message.toUtf8());
    timer_zu->start(interval);
}

void Form::on_z_up_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_zu->stop();
}

void Form::on_z_down_pressed()
{
//    QString message = "#Zdo";
//    my_tcp->write(message.toUtf8());
    timer_zd->start(interval);
}

void Form::on_z_down_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_zd->stop();
}

void Form::on_up_pressed()
{
//    QString message = "#up#";
//    my_tcp->write(message.toUtf8());
    timer_up->start(interval_end);
}

void Form::on_up_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_up->stop();
}

void Form::on_down_pressed()
{
//    QString message = "#do#";
//    my_tcp->write(message.toUtf8());
    timer_do->start(interval_end);
}

void Form::on_down_released()
{
    QString message = "#Sto";
    my_tcp->write(message.toUtf8());
    timer_do->stop();
}

void Form::on_close_clicked()
{
    QString message = "#clo";
    my_tcp->write(message.toUtf8());
}
