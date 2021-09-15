using namespace std;
#include "iostream"

#ifndef TESTC_BASE_H
#define TESTC_BASE_H


class Base {
private:int x;
public:Base(int a){x=a;}
    int get(){return x;}
    void showbase()  {cout<<"x="<<x<<endl;}

};


#endif //TESTC_BASE_H
