#include <cstdio>
#include <unistd.h>
#include <string>
#include <ctime>
#include <fstream>
#include <random>
#include <iomanip>
#include <iostream>

using namespace std;

#include "Goods.h"
#include "Store.h"
#include "Thief.h"
#include "mainwindow.h"

#define RANGE 100 //zakres do losowania wartosci/wag

Thief::Thief(int cap)
{
  s=0;
  we=0;
  this->knapsack_capacity=cap;
}

int Thief::get_target_weight(int i)
{
     return target[i].get_weight();
}

int Thief::get_target_value(int i)
{
      return target[i].get_value();
}

int Thief::get_target_size()
{
      return target.get_size();
}

void Thief::set_stolen_items(int index, int value)
{
    stolen_items[index]=value;
}

int Thief::get_stolen_items(int i)
{
    return stolen_items[i];
}

int Thief::get_we()
{
    return we;
}

void Thief::set_we(int value)
{
    we=value;
}

int Thief::get_worth_stealing(int i)
{
    return target[i].worth_stealing();
}

void Thief:: target_spot(int n)
{
  this->target=Store(n);


  cerr <<"Rozmiar listy: "<<  target.get_size() << endl;
  //1. Sposob - losowanie
  random_device rd;
  mt19937 rng(rd());
  uniform_int_distribution<int> uni(0,RANGE);

  for(int i =0; i<target.get_size();i++)
    {
      int a=uni(rng);
      //cout << "Przedmiot" << i+1 <<endl;
      target[i]=Goods(a,10*a);
      //cout << target[i].get_value() << "  ";
      //cout << target[i].get_weight() << endl;;
    }


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


//    set_weight();
//    set_value();
//    for (int i=0;i<10;i++)
//    {
//        cout<<weights[i]<<" "<<values[i]<<endl;
//        target[i]=Goods(weights[i], values[i]);
//        //cout<<"Co przekazuje apka: "<<target[i].get_weight()<<" "<<target.get_size()<<endl;
//    }



  cout << "W sklepie znajduja sie nastepujace przedmioty: "<< endl;
  for(int i=0; i < target.get_size() ;i++)
    {
      cout << "Przedmiot " << i << ": waga: ";
      cout << target[i].get_weight() <<" wartosc: ";
      cout <<target[i].get_value() << endl;
    }
}

void Thief::DP_approach()
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
