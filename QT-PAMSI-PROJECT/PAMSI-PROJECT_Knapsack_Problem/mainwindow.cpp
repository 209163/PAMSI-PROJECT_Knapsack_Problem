#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QStringList>
#include <iostream>
using namespace std;

#include "Goods.h"
#include "Store.h"
#include "Thief.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //poczatkowe wartosci klasy thief
    s=0;
    we=0;
    this->knapsack_capacity=7;

    //obrazki w gui
    QPixmap pix1("../img/zlodziej2.png");
    ui->logo->setPixmap(pix1);
    QPixmap pix2("../img/bracelet1.png");
    ui->img1->setPixmap(pix2);
    QPixmap pix3("../img/rings1.png");
    ui->img2->setPixmap(pix3);
    QPixmap pix4("../img/bracelet2.png");
    ui->img3->setPixmap(pix4);
    QPixmap pix5("../img/necklace1.png");
    ui->img4->setPixmap(pix5);
    QPixmap pix6("../img/earrings2.png");
    ui->img5->setPixmap(pix6);
    QPixmap pix7("../img/necklace2.png");
    ui->img6->setPixmap(pix7);
    QPixmap pix8("../img/earrings1.png");
    ui->img7->setPixmap(pix8);
    QPixmap pix9("../img/necklace3.png");
    ui->img8->setPixmap(pix9);
    QPixmap pix10("../img/watch.png");
    ui->img9->setPixmap(pix10);
    QPixmap pix11("../img/necklace4.png");
    ui->img10->setPixmap(pix11);

    //progressbar
    ui->progressBar->setValue(0);

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


//pobiera i zapisuje wartosci do tablicy intow ustawione w combobox
void MainWindow::set_value()
{

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

    int v1=value1.toInt();
    int v2=value2.toInt();
    int v3=value3.toInt();
    int v4=value4.toInt();
    int v5=value5.toInt();
    int v6=value6.toInt();
    int v7=value7.toInt();
    int v8=value8.toInt();
    int v9=value9.toInt();
    int v10=value10.toInt();


    values[0]=v1;
    values[1]=v2;
    values[2]=v3;
    values[3]=v4;
    values[4]=v5;
    values[5]=v6;
    values[6]=v7;
    values[7]=v8;
    values[8]=v9;
    values[9]=v10;
}

void MainWindow::set_weight()
{
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


    int v1=weight1.toInt();
    int v2=weight2.toInt();
    int v3=weight3.toInt();
    int v4=weight4.toInt();
    int v5=weight5.toInt();
    int v6=weight6.toInt();
    int v7=weight7.toInt();
    int v8=weight8.toInt();
    int v9=weight9.toInt();
    int v10=weight10.toInt();

    weights[0]=v1;
    weights[1]=v2;
    weights[2]=v3;
    weights[3]=v4;
    weights[4]=v5;
    weights[5]=v6;
    weights[6]=v7;
    weights[7]=v8;
    weights[8]=v9;
    weights[9]=v10;
}

void MainWindow::on_pushButton_clicked()
{
if(ui->checkBox->isChecked()){

    Thief test(7);
    test.target_spot(100);
    test.DP_approach();

    //zapelnienie plecaka
   float a=test.get_we();
   float b= test.get_knapsack_capacity();
    float c= (a/b)*100;
    ui->progressBar->setValue(c);

}
else{

    //pobieram wartosci ustawione przez uzytkownika w combo box'ach
    set_weight();
    set_value();
    for (int i=0;i<10;i++)
    {
        cout<<weights[i]<<" "<<values[i]<<endl;

        //target[i]=Goods(w.get_weight(i), w.get_value(i));
        //cout<<"Co przekazuje apka: "<<target[i].get_weight()<<" "<<target.get_size()<<endl;
    }


   //Thief test(7);
   target_spot();
   DP_approach();

   //zapelnienie plecaka
//  float a=test.get_we();
//  float b= test.get_knapsack_capacity();
   float a=get_we();
   float b=get_knapsack_capacity();
   float c= (a/b)*100;
   ui->progressBar->setValue(c);

   int j=0;
    QString stolen=NULL;
    for(int i=0 ; i < get_target_size(); i++)
      {
        if(get_worth_stealing(i))
      {
        set_stolen_items(j,i);
        //this->stolen_items[j]=i;
        stolen=stolen+(QString::number(get_stolen_items(j)+1))+ " ";
        //cout << "Przedmiot "<< stolen_items[j] << ", ";
        set_we(get_we()+get_target_weight(i));
        //this->we=this->we+target[i].get_weight();
      }
      }

   QString to_display = stolen;
   ui->shop_content->setText(to_display);

}

}

/**************************************** METODY ZLODZIEJA *****************************************************/
int MainWindow::get_target_weight(int i)
{
     return target[i].get_weight();
}

int MainWindow::get_target_value(int i)
{
      return target[i].get_value();
}

int MainWindow::get_target_size()
{
      return target.get_size();
}

void MainWindow::set_stolen_items(int index, int value)
{
    stolen_items[index]=value;
}

int MainWindow::get_stolen_items(int i)
{
    return stolen_items[i];
}

int MainWindow::get_we()
{
    return we;
}

void MainWindow::set_we(int value)
{
    we=value;
}

int MainWindow::get_worth_stealing(int i)
{
    return target[i].worth_stealing();
}

void MainWindow::target_spot()
{
  this->target=Store(10);

  /*
  cerr <<"Rozmiar listy: "<<  target.get_size() << endl;
  //1. Sposob - losowanie
  random_device rd;
  mt19937 rng(rd());
  uniform_int_distribution<int> uni(0,RANGE);

  for(int i =0; i<size;i++)
    {
      int a=uni(rng);
      cout << "Przedmiot" << i+1 <<endl;
      target[i]=Goods(a,10*a);
      cout << target[i].get_value() << "  ";
      cout << target[i].get_weight() << endl;;
    }
  */

//2. Sposob - reczna inicjalizacja listy towarow w sklepi

//Wagi -> 3,2,4,1
//Zysk -> 100,20,60,40
 //Goods(waga, wartosc)

//  target[0]=Goods(3,100);
//  target[1]=Goods(5,20);
//  target[2]=Goods(5,60);
//  target[3]=Goods(5,40);
//  target[4]=Goods(5,100);
//  target[5]=Goods(6,20);
//  target[6]=Goods(4,60);
//  target[7]=Goods(5,40);
//  target[8]=Goods(3,100);
//  target[9]=Goods(8,20);

//3. Sposob - pobranie wartosci z aplikacji

    //wartosci value i weight przekazane z aplikacji:


    set_weight();
    set_value();
    for (int i=0;i<10;i++)
    {
        cout<<weights[i]<<" "<<values[i]<<endl;
        target[i]=Goods(weights[i], values[i]);
        //cout<<"Co przekazuje apka: "<<target[i].get_weight()<<" "<<target.get_size()<<endl;
    }



  cout << "W sklepie znajduja sie nastepujace przedmioty: "<< endl;
  for(int i=0; i < target.get_size() ;i++)
    {
      cout << "Przedmiot " << i << ": waga: ";
      cout << target[i].get_weight() <<" wartosc: ";
      cout <<target[i].get_value() << endl;
    }
}

void MainWindow::DP_approach()
{
  int w=this->target.get_size()+1; //ile wierszy = ilosc przedmiotow w sklepie+1
  int k=this->knapsack_capacity+1; //ilosc kolumn = pojemnosc plecaka+1

  //1.Tworze tablice 2D V:

  int **V = new int *[w];
  for(int i = 0; i < target.get_size()+1;i++)
    {
      V[i]=new int [k];
    }

  //2.Wypelniam ja odpowiednimi wartosciami:
  //V[w][k] w-ilosc itemow, k-wypelnienie plecaka

  for(int i=0;i<w;i++) //0 itemow - zerowa waga
    V[i][0]=0;
  for(int i=0;i<k;i++) //0 waga - nie ma itemow
    V[0][i]=0;

  for(int i=1;i<w;i++)
    {
      for(int j=1;j<k;j++) // j - mozliwe wypelnienie plecaka
    {
      if(target[i-1].get_weight() > j) //target [i-1],bo indeksuje od 0
        V[i][j]=V[i-1][j];
      else
        {
          if(V[i-1][j] > target[i-1].get_value() + V[i-1][j-target[i-1].get_weight()])
        V[i][j]=V[i-1][j];
          else
        V[i][j]=target[i-1].get_value() + V[i-1][j-target[i-1].get_weight()];
        }
    }
    }

  for(int i=0;i<w;i++)
    {
      for(int j=0;j<k;j++)
    cout << V[i][j]<< "  ";
      cout << endl;
    }

  //3.Wyszukuje w niej optymalne rozwiazanie problemu
  //maksymalny zarobek znajduje sie w miejscu V[w][k]

  int i=w-1;
  int j=k-1;
  int n=0; //ilosc skradzionych towarow
  while(i>0 && j>0)
    {
      if(V[i][j] != V[i-1][j])
    {
      target[i-1].set_steal_flag(); //przedmiot warty kradziezy
      n++;
      j=j-target[i-1].get_weight();
      i--;
    }
      else
    {
      i--;
    }
    }

  //4.Wpisuje rozwiazanie do pola struktury stolen_items

  this->s=n; //ustawiam ilosc skradzionych towarow

  this->stolen_items=new int [s];

  j=0;

  cerr << "Najlepiej ukrasc " << s << " przedmioty"<< endl;
  for(int i=0 ; i < target.get_size(); i++)
    {
      if(target[i].worth_stealing())
    {
      this->stolen_items[j]=i;
      cout << "Przedmiot "<< stolen_items[j] << ", ";
      this->we=this->we+target[i].get_weight();
    }
    }
  cout << endl;
  cout << "Ktore w sumie wazyly: " << this->we << endl;

  //5.Zwalniam pamieci po tablicy V
  for(int i=0;i<w;i++)
    delete [] V[i];
  delete [] V;
  V=NULL;
}
