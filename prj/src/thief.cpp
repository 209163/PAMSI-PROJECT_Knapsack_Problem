#include <cstdio>
#include <unistd.h>
#include <string>
#include <ctime>
#include <fstream>
#include <random>
#include <iomanip>
#include <iostream>

using namespace std;

#include "Goods.hh"
#include "Store.hh"
#include "Thief.hh"

#define RANGE 100

void Thief:: target_spot(int size)
{
  this->target=Store(size);

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
  

//2. Sposob - reczna inicjalizacja listy towarow w sklepie



}
