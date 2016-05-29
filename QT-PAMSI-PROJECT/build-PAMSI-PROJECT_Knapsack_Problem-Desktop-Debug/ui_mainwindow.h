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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *img1;
    QLabel *img2;
    QLabel *img3;
    QLabel *img4;
    QLabel *img5;
    QProgressBar *progressBar;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *cB_weight1;
    QComboBox *cB_weight2;
    QComboBox *cB_weight3;
    QComboBox *cB_weight4;
    QComboBox *cB_weight5;
    QLabel *label_4;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *cB_weight6;
    QComboBox *cB_weight7;
    QComboBox *cB_weight8;
    QComboBox *cB_weight9;
    QComboBox *cB_weight10;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *cB_value6;
    QComboBox *cB_value7;
    QComboBox *cB_value8;
    QComboBox *cB_value9;
    QComboBox *cB_value10;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cB_value1;
    QComboBox *cB_value2;
    QComboBox *cB_value3;
    QComboBox *cB_value4;
    QComboBox *cB_value5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QCheckBox *checkBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_20;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(759, 839);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../pamsi_project/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew_window = new QAction(MainWindow);
        actionNew_window->setObjectName(QStringLiteral("actionNew_window"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(110, 10, 521, 151));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 390, 481, 91));
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
        pushButton->setGeometry(QRect(140, 730, 111, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(false);
        shop_content = new QTextBrowser(centralWidget);
        shop_content->setObjectName(QStringLiteral("shop_content"));
        shop_content->setGeometry(QRect(370, 620, 256, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 590, 261, 20));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 220, 481, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        img1 = new QLabel(layoutWidget1);
        img1->setObjectName(QStringLiteral("img1"));

        horizontalLayout->addWidget(img1);

        img2 = new QLabel(layoutWidget1);
        img2->setObjectName(QStringLiteral("img2"));

        horizontalLayout->addWidget(img2);

        img3 = new QLabel(layoutWidget1);
        img3->setObjectName(QStringLiteral("img3"));

        horizontalLayout->addWidget(img3);

        img4 = new QLabel(layoutWidget1);
        img4->setObjectName(QStringLiteral("img4"));

        horizontalLayout->addWidget(img4);

        img5 = new QLabel(layoutWidget1);
        img5->setObjectName(QStringLiteral("img5"));

        horizontalLayout->addWidget(img5);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(140, 690, 481, 23));
        progressBar->setValue(24);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 320, 111, 20));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(130, 340, 481, 29));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        cB_weight1 = new QComboBox(layoutWidget_2);
        cB_weight1->setObjectName(QStringLiteral("cB_weight1"));

        horizontalLayout_4->addWidget(cB_weight1);

        cB_weight2 = new QComboBox(layoutWidget_2);
        cB_weight2->setObjectName(QStringLiteral("cB_weight2"));

        horizontalLayout_4->addWidget(cB_weight2);

        cB_weight3 = new QComboBox(layoutWidget_2);
        cB_weight3->setObjectName(QStringLiteral("cB_weight3"));

        horizontalLayout_4->addWidget(cB_weight3);

        cB_weight4 = new QComboBox(layoutWidget_2);
        cB_weight4->setObjectName(QStringLiteral("cB_weight4"));

        horizontalLayout_4->addWidget(cB_weight4);

        cB_weight5 = new QComboBox(layoutWidget_2);
        cB_weight5->setObjectName(QStringLiteral("cB_weight5"));

        horizontalLayout_4->addWidget(cB_weight5);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 660, 171, 17));
        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(130, 510, 481, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        cB_weight6 = new QComboBox(layoutWidget_3);
        cB_weight6->setObjectName(QStringLiteral("cB_weight6"));

        horizontalLayout_5->addWidget(cB_weight6);

        cB_weight7 = new QComboBox(layoutWidget_3);
        cB_weight7->setObjectName(QStringLiteral("cB_weight7"));

        horizontalLayout_5->addWidget(cB_weight7);

        cB_weight8 = new QComboBox(layoutWidget_3);
        cB_weight8->setObjectName(QStringLiteral("cB_weight8"));

        horizontalLayout_5->addWidget(cB_weight8);

        cB_weight9 = new QComboBox(layoutWidget_3);
        cB_weight9->setObjectName(QStringLiteral("cB_weight9"));

        horizontalLayout_5->addWidget(cB_weight9);

        cB_weight10 = new QComboBox(layoutWidget_3);
        cB_weight10->setObjectName(QStringLiteral("cB_weight10"));

        horizontalLayout_5->addWidget(cB_weight10);

        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(130, 480, 481, 29));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        cB_value6 = new QComboBox(layoutWidget_4);
        cB_value6->setObjectName(QStringLiteral("cB_value6"));

        horizontalLayout_6->addWidget(cB_value6);

        cB_value7 = new QComboBox(layoutWidget_4);
        cB_value7->setObjectName(QStringLiteral("cB_value7"));

        horizontalLayout_6->addWidget(cB_value7);

        cB_value8 = new QComboBox(layoutWidget_4);
        cB_value8->setObjectName(QStringLiteral("cB_value8"));

        horizontalLayout_6->addWidget(cB_value8);

        cB_value9 = new QComboBox(layoutWidget_4);
        cB_value9->setObjectName(QStringLiteral("cB_value9"));

        horizontalLayout_6->addWidget(cB_value9);

        cB_value10 = new QComboBox(layoutWidget_4);
        cB_value10->setObjectName(QStringLiteral("cB_value10"));

        horizontalLayout_6->addWidget(cB_value10);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 510, 91, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 490, 111, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 340, 91, 20));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 310, 481, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cB_value1 = new QComboBox(layoutWidget2);
        cB_value1->setObjectName(QStringLiteral("cB_value1"));

        horizontalLayout_3->addWidget(cB_value1);

        cB_value2 = new QComboBox(layoutWidget2);
        cB_value2->setObjectName(QStringLiteral("cB_value2"));

        horizontalLayout_3->addWidget(cB_value2);

        cB_value3 = new QComboBox(layoutWidget2);
        cB_value3->setObjectName(QStringLiteral("cB_value3"));

        horizontalLayout_3->addWidget(cB_value3);

        cB_value4 = new QComboBox(layoutWidget2);
        cB_value4->setObjectName(QStringLiteral("cB_value4"));

        horizontalLayout_3->addWidget(cB_value4);

        cB_value5 = new QComboBox(layoutWidget2);
        cB_value5->setObjectName(QStringLiteral("cB_value5"));

        horizontalLayout_3->addWidget(cB_value5);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 200, 16, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(260, 200, 16, 17));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 200, 16, 17));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(460, 200, 16, 17));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(560, 200, 16, 17));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(560, 370, 16, 17));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(460, 370, 16, 17));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(170, 370, 16, 17));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(350, 370, 16, 17));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(260, 370, 16, 17));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(360, 570, 241, 17));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(110, 570, 21, 22));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 570, 187, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(widget);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout->addWidget(label_19);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout->addWidget(label_18);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout->addWidget(label_20);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 759, 25));
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
        label->setText(QApplication::translate("MainWindow", "nalezy ukrasc przedmioty o indeksach:", 0));
        img1->setText(QString());
        img2->setText(QString());
        img3->setText(QString());
        img4->setText(QString());
        img5->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Ustaw wartosc:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Wypelnienie plecaka:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Ustaw wage:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Ustaw wartosc:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Ustaw wage:", 0));
        label_7->setText(QApplication::translate("MainWindow", "1", 0));
        label_8->setText(QApplication::translate("MainWindow", "2", 0));
        label_9->setText(QApplication::translate("MainWindow", "3", 0));
        label_10->setText(QApplication::translate("MainWindow", "4", 0));
        label_11->setText(QApplication::translate("MainWindow", "5", 0));
        label_12->setText(QApplication::translate("MainWindow", "10", 0));
        label_13->setText(QApplication::translate("MainWindow", "9", 0));
        label_14->setText(QApplication::translate("MainWindow", "6", 0));
        label_15->setText(QApplication::translate("MainWindow", "8", 0));
        label_16->setText(QApplication::translate("MainWindow", "7", 0));
        label_17->setText(QApplication::translate("MainWindow", "Przy pojemnosci plecaka rownej 7, ", 0));
        checkBox->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "100 elementow o losowych", 0));
        label_18->setText(QApplication::translate("MainWindow", "wartosciach i wagach", 0));
        label_20->setText(QApplication::translate("MainWindow", "=> wynik w konsoli", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
