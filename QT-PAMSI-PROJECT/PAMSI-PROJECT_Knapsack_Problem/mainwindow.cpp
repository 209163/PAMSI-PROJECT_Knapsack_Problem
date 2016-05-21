#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

using namespace std;

#include "Goods.h"
#include "Store.h"
#include "Thief.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //obrazki w gui
    QPixmap pix1("/home/paula/QTworkspace/PAMSI-PROJECT/img/zlodziej2min.png");
    ui->logo->setPixmap(pix1);
    QPixmap pix2("/home/paula/QTworkspace/PAMSI-PROJECT/img/bracelet1min.png");
    ui->img1->setPixmap(pix2);
    QPixmap pix3("/home/paula/QTworkspace/PAMSI-PROJECT/img/rings1min.png");
    ui->img2->setPixmap(pix3);
    QPixmap pix4("/home/paula/QTworkspace/PAMSI-PROJECT/img/bracelet2min.png");
    ui->img3->setPixmap(pix4);
    QPixmap pix5("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace1min.png");
    ui->img4->setPixmap(pix5);
    QPixmap pix6("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace1min.png");
    ui->img5->setPixmap(pix6);
    QPixmap pix7("/home/paula/QTworkspace/PAMSI-PROJECT/img/bracelet1min.png");
    ui->img6->setPixmap(pix7);
    QPixmap pix8("/home/paula/QTworkspace/PAMSI-PROJECT/img/rings1min.png");
    ui->img7->setPixmap(pix8);
    QPixmap pix9("/home/paula/QTworkspace/PAMSI-PROJECT/img/bracelet2min.png");
    ui->img8->setPixmap(pix9);
    QPixmap pix10("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace1min.png");
    ui->img9->setPixmap(pix10);
    QPixmap pix11("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace1min.png");
    ui->img10->setPixmap(pix11);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Thief test(7);
      test.target_spot(6);
      test.DP_approach();

      //wyswietlam w okienku to co wczesniej w konsoli
      //zamieniam najpierw na stringa

      QString weight=NULL;
      for(int i=0; i < 3;i++)
        {
    QString text1 = QString::number(test.get_stolen_items_weight(i));
    //QString text2 = QString::number(test.get_stolen_items_value(i));
    weight=weight+text1;
    ui->shop_content->setText(weight);
        }
}
