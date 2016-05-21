#ifndef STORE_H
#define STORE_H

class Store
{
    Goods* supply; //lista towarow
    int size;
  public:
    Store();
    Store(int siz);
    int get_size();
    Goods& operator[](int index);
    ~Store();
};

#endif // STORE_H
