/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ptz_down;
    QSpacerItem *horizontalSpacer;
    QPushButton *ptz_up;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *L1_down;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *L1_up;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *L2_down;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *L2_up;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *end_down;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *end_up;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *claw_close;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *claw_open;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(456, 638);
        centralwidget = new QWidget(Form);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ptz_down = new QPushButton(widget);
        ptz_down->setObjectName(QString::fromUtf8("ptz_down"));
        ptz_down->setMinimumSize(QSize(100, 100));

        horizontalLayout->addWidget(ptz_down);

        horizontalSpacer = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ptz_up = new QPushButton(widget);
        ptz_up->setObjectName(QString::fromUtf8("ptz_up"));
        ptz_up->setMinimumSize(QSize(100, 100));

        horizontalLayout->addWidget(ptz_up);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        L1_down = new QPushButton(widget_2);
        L1_down->setObjectName(QString::fromUtf8("L1_down"));
        L1_down->setMinimumSize(QSize(100, 100));

        horizontalLayout_2->addWidget(L1_down);

        horizontalSpacer_2 = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        L1_up = new QPushButton(widget_2);
        L1_up->setObjectName(QString::fromUtf8("L1_up"));
        L1_up->setMinimumSize(QSize(100, 100));

        horizontalLayout_2->addWidget(L1_up);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        L2_down = new QPushButton(widget_3);
        L2_down->setObjectName(QString::fromUtf8("L2_down"));
        L2_down->setMinimumSize(QSize(100, 100));

        horizontalLayout_3->addWidget(L2_down);

        horizontalSpacer_3 = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        L2_up = new QPushButton(widget_3);
        L2_up->setObjectName(QString::fromUtf8("L2_up"));
        L2_up->setMinimumSize(QSize(100, 100));

        horizontalLayout_3->addWidget(L2_up);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        end_down = new QPushButton(widget_4);
        end_down->setObjectName(QString::fromUtf8("end_down"));
        end_down->setMinimumSize(QSize(100, 100));

        horizontalLayout_4->addWidget(end_down);

        horizontalSpacer_4 = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        end_up = new QPushButton(widget_4);
        end_up->setObjectName(QString::fromUtf8("end_up"));
        end_up->setMinimumSize(QSize(100, 100));

        horizontalLayout_4->addWidget(end_up);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        claw_close = new QPushButton(widget_5);
        claw_close->setObjectName(QString::fromUtf8("claw_close"));
        claw_close->setMinimumSize(QSize(100, 100));

        horizontalLayout_5->addWidget(claw_close);

        horizontalSpacer_5 = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        claw_open = new QPushButton(widget_5);
        claw_open->setObjectName(QString::fromUtf8("claw_open"));
        claw_open->setMinimumSize(QSize(100, 100));

        horizontalLayout_5->addWidget(claw_open);


        verticalLayout->addWidget(widget_5);

        Form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Form);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 456, 26));
        Form->setMenuBar(menubar);
        statusbar = new QStatusBar(Form);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Form->setStatusBar(statusbar);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QMainWindow *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "MainWindow", nullptr));
        ptz_down->setText(QCoreApplication::translate("Form", "ptz_down", nullptr));
        ptz_up->setText(QCoreApplication::translate("Form", "ptz_up", nullptr));
        L1_down->setText(QCoreApplication::translate("Form", "L1_down", nullptr));
        L1_up->setText(QCoreApplication::translate("Form", "L1_up", nullptr));
        L2_down->setText(QCoreApplication::translate("Form", "L2_down", nullptr));
        L2_up->setText(QCoreApplication::translate("Form", "L2_up", nullptr));
        end_down->setText(QCoreApplication::translate("Form", "end_down", nullptr));
        end_up->setText(QCoreApplication::translate("Form", "end_up", nullptr));
        claw_close->setText(QCoreApplication::translate("Form", "claw_close", nullptr));
        claw_open->setText(QCoreApplication::translate("Form", "claw_open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
