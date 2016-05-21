/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_window;
    QWidget *centralWidget;
    QLabel *logo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *img6;
    QLabel *img7;
    QLabel *img8;
    QLabel *img9;
    QLabel *img10;
    QPushButton *pushButton;
    QTextBrowser *shop_content;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *img1;
    QLabel *img2;
    QLabel *img3;
    QLabel *img4;
    QLabel *img5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(516, 707);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../pamsi_project/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew_window = new QAction(MainWindow);
        actionNew_window->setObjectName(QStringLiteral("actionNew_window"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(0, 0, 521, 151));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 330, 481, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        img6 = new QLabel(layoutWidget);
        img6->setObjectName(QStringLiteral("img6"));

        horizontalLayout_2->addWidget(img6);

        img7 = new QLabel(layoutWidget);
        img7->setObjectName(QStringLiteral("img7"));

        horizontalLayout_2->addWidget(img7);

        img8 = new QLabel(layoutWidget);
        img8->setObjectName(QStringLiteral("img8"));

        horizontalLayout_2->addWidget(img8);

        img9 = new QLabel(layoutWidget);
        img9->setObjectName(QStringLiteral("img9"));

        horizontalLayout_2->addWidget(img9);

        img10 = new QLabel(layoutWidget);
        img10->setObjectName(QStringLiteral("img10"));

        horizontalLayout_2->addWidget(img10);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 596, 111, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(false);
        shop_content = new QTextBrowser(centralWidget);
        shop_content->setObjectName(QStringLiteral("shop_content"));
        shop_content->setGeometry(QRect(230, 480, 256, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 450, 331, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 170, 481, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        img1 = new QLabel(widget);
        img1->setObjectName(QStringLiteral("img1"));

        horizontalLayout->addWidget(img1);

        img2 = new QLabel(widget);
        img2->setObjectName(QStringLiteral("img2"));

        horizontalLayout->addWidget(img2);

        img3 = new QLabel(widget);
        img3->setObjectName(QStringLiteral("img3"));

        horizontalLayout->addWidget(img3);

        img4 = new QLabel(widget);
        img4->setObjectName(QStringLiteral("img4"));

        horizontalLayout->addWidget(img4);

        img5 = new QLabel(widget);
        img5->setObjectName(QStringLiteral("img5"));

        horizontalLayout->addWidget(img5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 516, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "KnapSack Problem Application", 0));
        actionNew_window->setText(QApplication::translate("MainWindow", "New window", 0));
        logo->setText(QString());
        img6->setText(QString());
        img7->setText(QString());
        img8->setText(QString());
        img9->setText(QString());
        img10->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Start", 0));
        label->setText(QApplication::translate("MainWindow", "W sklepie znajduja sie nastepujace przedmioty:", 0));
        img1->setText(QString());
        img2->setText(QString());
        img3->setText(QString());
        img4->setText(QString());
        img5->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
