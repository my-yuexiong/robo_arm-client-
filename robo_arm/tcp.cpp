#include "tcp.h"
#include "ui_tcp.h"


Tcp::Tcp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tcp)
{
    ui->setupUi(this);

    ui->logo2->setPixmap(QPixmap(":/res/R-C.jpg").scaled(800,450));

    tcpsocket = new QTcpSocket(this);

    form = new Form;
    form->my_tcp = tcpsocket;

    ui->disconnnect->setDisabled(true);
    ui->armStart->setDisabled(true);

    connect(tcpsocket,&QTcpSocket::connected,this,[=](){
        QMessageBox::warning(this,"提示","成功连接服务器！");
        ui->disconnnect->setDisabled(false);
        ui->armStart->setDisabled(false);
        ui->connect->setDisabled(true);
    });

    connect(tcpsocket,&QTcpSocket::disconnected,this,[=](){
        QMessageBox::warning(this,"提示","连接已断开！");
        ui->disconnnect->setDisabled(true);
        ui->armStart->setDisabled(true);
        ui->connect->setDisabled(false);
        form->hide();
        this->show();
    });
}

Tcp::~Tcp()
{
    delete ui;
}

void Tcp::on_armStart_clicked()
{
    this->hide();
    form->show();
}

void Tcp::on_connect_clicked()
{
    unsigned short port = ui->port->text().toUShort();
    QString ip = ui->ipAddr->text();

    tcpsocket->connectToHost(QHostAddress(ip),port);
}

void Tcp::on_disconnnect_clicked()
{
    tcpsocket->close();
    ui->disconnnect->setDisabled(true);
    ui->armStart->setDisabled(true);
    ui->connect->setDisabled(false);
}
