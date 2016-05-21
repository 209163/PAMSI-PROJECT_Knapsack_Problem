#include <cstdio>
#include <unistd.h>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

#include "Goods.h"

Goods::Goods()
{
  this->weight=0;
  this->value=0;
  this->steal_flag=false;
}

Goods::Goods(int w,int v)
{
  this->weight=w;
  this->value=v;
  this->steal_flag=false;
}

void Goods::set_steal_flag()
{
  this->steal_flag=true;
}

bool Goods::worth_stealing()
{
  return this->steal_flag;
}

string Goods::get_name()
{
  return this->name;
}

int Goods::get_value()
{
  return this->value;
}

int Goods::get_weight()
{
  return this->weight;
}
