#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    account = "2024robocon";
    password = "myblangchao";
    ui->logo1->setPixmap(QPixmap(":/res/logo12.png").scaled(686,289));
    ui->statusbar->showMessage("    by 越雄");

    tcp_form = new Tcp;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    QString quser = ui->account->text();
    QString qpassword = ui->password->text();

    if(quser.isEmpty() || qpassword.isEmpty())//账号或者密码有空
        {
            QMessageBox::warning(this,"警告","账号和密码不能为空！");
        }
    else
    {
        if(quser != account || qpassword != password)
        {
            QMessageBox::warning(this,"警告","账号或者密码不正确！若急需操作机械臂，请联系越雄");
            ui->account->clear();
            ui->password->clear();
        }
        else
        {
            ui->account->clear();
            ui->password->clear();
            this->hide();
            tcp_form->show();
        }
    }
}
