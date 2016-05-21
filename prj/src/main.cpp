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
#include "Thief.hh"

int main()
{
  Thief test(5);
  test.target_spot(4);
  test.DP_approach();
}
