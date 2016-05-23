#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QStringList>

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
    QPixmap pix1("/home/paula/QTworkspace/PAMSI-PROJECT/img/zlodziej2.png");
    ui->logo->setPixmap(pix1);
    QPixmap pix2("/home/paula/QTworkspace/PAMSI-PROJECT/img/bracelet1.png");
    ui->img1->setPixmap(pix2);
    QPixmap pix3("/home/paula/QTworkspace/PAMSI-PROJECT/img/rings1.png");
    ui->img2->setPixmap(pix3);
    QPixmap pix4("/home/paula/QTworkspace/PAMSI-PROJECT/img/bracelet2.png");
    ui->img3->setPixmap(pix4);
    QPixmap pix5("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace1.png");
    ui->img4->setPixmap(pix5);
    QPixmap pix6("/home/paula/QTworkspace/PAMSI-PROJECT/img/earrings2.png");
    ui->img5->setPixmap(pix6);
    QPixmap pix7("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace2.png");
    ui->img6->setPixmap(pix7);
    QPixmap pix8("/home/paula/QTworkspace/PAMSI-PROJECT/img/earrings1.png");
    ui->img7->setPixmap(pix8);
    QPixmap pix9("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace3.png");
    ui->img8->setPixmap(pix9);
    QPixmap pix10("/home/paula/QTworkspace/PAMSI-PROJECT/img/watch.png");
    ui->img9->setPixmap(pix10);
    QPixmap pix11("/home/paula/QTworkspace/PAMSI-PROJECT/img/necklace4.png");
    ui->img10->setPixmap(pix11);

    //wartosci w combobox
    //value
    QStringList v;
    for(int i=10; i<101;i=i+10)
    {
        QString text = QString::number(i);
        v<<text;
    }

    ui->cB_value1->addItems(v);
    ui->cB_value2->addItems(v);
    ui->cB_value3->addItems(v);
    ui->cB_value4->addItems(v);
    ui->cB_value5->addItems(v);
    ui->cB_value6->addItems(v);
    ui->cB_value7->addItems(v);
    ui->cB_value8->addItems(v);
    ui->cB_value9->addItems(v);
    ui->cB_value10->addItems(v);

    //weight
    QStringList w;
    for(int i=1; i<11;i++)
    {
        QString text = QString::number(i);
        w<<text;
    }
    ui->cB_weight1->addItems(w);
    ui->cB_weight2->addItems(w);
    ui->cB_weight3->addItems(w);
    ui->cB_weight4->addItems(w);
    ui->cB_weight5->addItems(w);
    ui->cB_weight6->addItems(w);
    ui->cB_weight7->addItems(w);
    ui->cB_weight8->addItems(w);
    ui->cB_weight9->addItems(w);
    ui->cB_weight10->addItems(w);

}

MainWindow::~MainWindow()
{
    delete ui;
}



int MainWindow::get_value(int i)
{
    QStringList values;

    QString value1= ui->cB_value1->currentText();
    QString value2= ui->cB_value2->currentText();
    QString value3= ui->cB_value3->currentText();
    QString value4= ui->cB_value4->currentText();
    QString value5= ui->cB_value5->currentText();
    QString value6= ui->cB_value6->currentText();
    QString value7= ui->cB_value7->currentText();
    QString value8= ui->cB_value8->currentText();
    QString value9= ui->cB_value9->currentText();
    QString value10= ui->cB_value10->currentText();


     values<<value1<<value2<<value3<<value4<<value5<<value6<<value7<<value8<<value9<<value10;
    int value=values[i].toInt();
     return value;

}

int MainWindow::get_weight(int i)
{
    QStringList weights;

    QString weight1= ui->cB_weight1->currentText();
    QString weight2= ui->cB_weight2->currentText();
    QString weight3= ui->cB_weight3->currentText();
    QString weight4= ui->cB_weight4->currentText();
    QString weight5= ui->cB_weight5->currentText();
    QString weight6= ui->cB_weight6->currentText();
    QString weight7= ui->cB_weight7->currentText();
    QString weight8= ui->cB_weight8->currentText();
    QString weight9= ui->cB_weight9->currentText();
    QString weight10= ui->cB_weight10->currentText();

    weights<<weight1<<weight2<<weight3<<weight4<<weight5<<weight6<<weight7<<weight8<<weight9<<weight10;
    int weight=weights[i].toInt();
     return weight;

}

void MainWindow::on_pushButton_clicked()
{
    QString value1=QString::number(get_value(0));
    QString value5=QString::number(get_value(4));



//      //wyswietlam w okienku to co wczesniej w konsoli
//      //zamieniam najpierw na stringa

//      QString weight=NULL;
//      for(int i=0; i < 3;i++)
//        {
//    QString text1 = QString::number(test.get_stolen_items_weight(i));
//    //QString text2 = QString::number(test.get_stolen_items_value(i));
//    weight=weight+text1;

//        }

   Thief test(7);
   test.target_spot(10);
   test.DP_approach();

   //zapelnienie plecaka
  float a=test.get_we();
  float b= test.get_knapsack_capacity();
  float c= (a/b)*100;
   ui->progressBar->setValue(c);

   int j=0;
    QString stolen=NULL;
    for(int i=0 ; i < test.get_target_size(); i++)
      {
        if(test.get_worth_stealing(i))
      {
        test.set_stolen_items(j,i);
        //this->stolen_items[j]=i;
        stolen=stolen+(QString::number(test.get_stolen_items(j)))+ " ";
        //cout << "Przedmiot "<< stolen_items[j] << ", ";
        test.set_we(test.get_we()+test.get_target_weight(i));
        //this->we=this->we+target[i].get_weight();
      }
      }

   QString to_display = stolen;
   ui->shop_content->setText(to_display);





}
