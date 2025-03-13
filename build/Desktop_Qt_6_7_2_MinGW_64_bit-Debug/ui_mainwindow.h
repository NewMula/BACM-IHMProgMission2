/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_pointVirgulle_2;
    QLCDNumber *lcdNumber_X;
    QLabel *label_pointVirgulle;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_pointVirgulle_3;
    QLCDNumber *lcdNumber_Y;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_plusX;
    QPushButton *pushButton_moinsX;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_plusY;
    QPushButton *pushButton_12;
    QPushButton *pushButton_Conf;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_pointVirgulle_4;
    QListView *listView_points;
    QPushButton *pushButton_Del;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1137, 719);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(60, 30, 701, 461));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_pointVirgulle_2 = new QLabel(horizontalLayoutWidget);
        label_pointVirgulle_2->setObjectName("label_pointVirgulle_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_pointVirgulle_2->sizePolicy().hasHeightForWidth());
        label_pointVirgulle_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        label_pointVirgulle_2->setFont(font);
        label_pointVirgulle_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_pointVirgulle_2);

        lcdNumber_X = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_X->setObjectName("lcdNumber_X");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        lcdNumber_X->setFont(font1);

        verticalLayout->addWidget(lcdNumber_X);


        horizontalLayout->addLayout(verticalLayout);

        label_pointVirgulle = new QLabel(horizontalLayoutWidget);
        label_pointVirgulle->setObjectName("label_pointVirgulle");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_pointVirgulle->sizePolicy().hasHeightForWidth());
        label_pointVirgulle->setSizePolicy(sizePolicy1);
        label_pointVirgulle->setFont(font);
        label_pointVirgulle->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_pointVirgulle);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_pointVirgulle_3 = new QLabel(horizontalLayoutWidget);
        label_pointVirgulle_3->setObjectName("label_pointVirgulle_3");
        sizePolicy.setHeightForWidth(label_pointVirgulle_3->sizePolicy().hasHeightForWidth());
        label_pointVirgulle_3->setSizePolicy(sizePolicy);
        label_pointVirgulle_3->setFont(font);
        label_pointVirgulle_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_pointVirgulle_3);

        lcdNumber_Y = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_Y->setObjectName("lcdNumber_Y");

        verticalLayout_2->addWidget(lcdNumber_Y);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_plusX = new QPushButton(horizontalLayoutWidget);
        pushButton_plusX->setObjectName("pushButton_plusX");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_plusX->sizePolicy().hasHeightForWidth());
        pushButton_plusX->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Impact")});
        font2.setPointSize(36);
        font2.setBold(false);
        pushButton_plusX->setFont(font2);

        verticalLayout_3->addWidget(pushButton_plusX);

        pushButton_moinsX = new QPushButton(horizontalLayoutWidget);
        pushButton_moinsX->setObjectName("pushButton_moinsX");
        sizePolicy2.setHeightForWidth(pushButton_moinsX->sizePolicy().hasHeightForWidth());
        pushButton_moinsX->setSizePolicy(sizePolicy2);
        pushButton_moinsX->setFont(font2);

        verticalLayout_3->addWidget(pushButton_moinsX);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_plusY = new QPushButton(horizontalLayoutWidget);
        pushButton_plusY->setObjectName("pushButton_plusY");
        sizePolicy2.setHeightForWidth(pushButton_plusY->sizePolicy().hasHeightForWidth());
        pushButton_plusY->setSizePolicy(sizePolicy2);
        pushButton_plusY->setFont(font2);

        verticalLayout_4->addWidget(pushButton_plusY);

        pushButton_12 = new QPushButton(horizontalLayoutWidget);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy2.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy2);
        pushButton_12->setFont(font2);

        verticalLayout_4->addWidget(pushButton_12);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        pushButton_Conf = new QPushButton(horizontalLayoutWidget);
        pushButton_Conf->setObjectName("pushButton_Conf");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(20);
        sizePolicy3.setHeightForWidth(pushButton_Conf->sizePolicy().hasHeightForWidth());
        pushButton_Conf->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(pushButton_Conf);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_pointVirgulle_4 = new QLabel(horizontalLayoutWidget);
        label_pointVirgulle_4->setObjectName("label_pointVirgulle_4");
        sizePolicy.setHeightForWidth(label_pointVirgulle_4->sizePolicy().hasHeightForWidth());
        label_pointVirgulle_4->setSizePolicy(sizePolicy);
        label_pointVirgulle_4->setFont(font);
        label_pointVirgulle_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_pointVirgulle_4);

        listView_points = new QListView(horizontalLayoutWidget);
        listView_points->setObjectName("listView_points");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listView_points->sizePolicy().hasHeightForWidth());
        listView_points->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(listView_points);

        pushButton_Del = new QPushButton(horizontalLayoutWidget);
        pushButton_Del->setObjectName("pushButton_Del");
        sizePolicy.setHeightForWidth(pushButton_Del->sizePolicy().hasHeightForWidth());
        pushButton_Del->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(pushButton_Del);


        horizontalLayout_3->addLayout(verticalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1137, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pointVirgulle_2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_pointVirgulle->setText(QCoreApplication::translate("MainWindow", ";", nullptr));
        label_pointVirgulle_3->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        pushButton_plusX->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_moinsX->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plusY->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_Conf->setText(QCoreApplication::translate("MainWindow", "Confirmer", nullptr));
        label_pointVirgulle_4->setText(QCoreApplication::translate("MainWindow", "Parcours", nullptr));
        pushButton_Del->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
