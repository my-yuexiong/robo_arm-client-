/********************************************************************************
** Form generated from reading UI file 'tcp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_H
#define UI_TCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tcp
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *logo2;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *port;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ipAddr;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *connect;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *disconnnect;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *armStart;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *Tcp)
    {
        if (Tcp->objectName().isEmpty())
            Tcp->setObjectName(QString::fromUtf8("Tcp"));
        Tcp->resize(410, 549);
        verticalLayout_2 = new QVBoxLayout(Tcp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_4 = new QWidget(Tcp);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        logo2 = new QLabel(widget_4);
        logo2->setObjectName(QString::fromUtf8("logo2"));

        horizontalLayout_5->addWidget(logo2);

        horizontalSpacer_6 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_4);

        widget = new QWidget(Tcp);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        port = new QLineEdit(widget);
        port->setObjectName(QString::fromUtf8("port"));

        horizontalLayout->addWidget(port);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ipAddr = new QLineEdit(widget);
        ipAddr->setObjectName(QString::fromUtf8("ipAddr"));

        horizontalLayout_2->addWidget(ipAddr);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(Tcp);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        connect = new QPushButton(widget_2);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setMinimumSize(QSize(150, 50));

        horizontalLayout_3->addWidget(connect);

        horizontalSpacer_2 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(Tcp);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        disconnnect = new QPushButton(widget_3);
        disconnnect->setObjectName(QString::fromUtf8("disconnnect"));
        disconnnect->setMinimumSize(QSize(150, 50));

        horizontalLayout_4->addWidget(disconnnect);

        horizontalSpacer_4 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(widget_3);

        widget_5 = new QWidget(Tcp);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        armStart = new QPushButton(widget_5);
        armStart->setObjectName(QString::fromUtf8("armStart"));
        armStart->setMinimumSize(QSize(150, 50));

        horizontalLayout_6->addWidget(armStart);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout_2->addWidget(widget_5);


        retranslateUi(Tcp);

        QMetaObject::connectSlotsByName(Tcp);
    } // setupUi

    void retranslateUi(QWidget *Tcp)
    {
        Tcp->setWindowTitle(QCoreApplication::translate("Tcp", "Form", nullptr));
        logo2->setText(QCoreApplication::translate("Tcp", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Tcp", "port: ", nullptr));
        label_2->setText(QCoreApplication::translate("Tcp", "  ip: ", nullptr));
        connect->setText(QCoreApplication::translate("Tcp", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        disconnnect->setText(QCoreApplication::translate("Tcp", "\346\226\255\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        armStart->setText(QCoreApplication::translate("Tcp", "\346\223\215\344\275\234\346\234\272\346\242\260\350\207\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tcp: public Ui_Tcp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_H
