#include <cstdio>
#include <unistd.h>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

#include "Goods.hh"
#include "Store.hh"

Store::Store()
{
  this->supply=new Goods[10];
  this->size=10;
}

Store::Store(int siz)
{
  this->supply=new Goods[siz];
  this->size=siz;
}

int Store::get_size()
{
  return size;
}

Goods& Store::operator[](int index)
{
  if(index < this->size)
    return supply[index];
  else
    {
      cerr << "Towar o indeksie:"<< index << " nie istnieje." << endl;
      return supply[0];
    }
}

Store::~Store()
{
}
