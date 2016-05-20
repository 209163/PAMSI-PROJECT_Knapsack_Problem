#include <cstdio>
#include <unistd.h>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

#include "Goods.hh"

Goods::Goods()
{
  name="x";
  weight=0;
  value=0;
}

Goods::Goods(int w,int v)
{
  weight=w;
  value=v;
}

string Goods::get_name()
{
  return name;
}

int Goods::get_value()
{
  return value;
}

int Goods::get_weight()
{
  return weight;
}
