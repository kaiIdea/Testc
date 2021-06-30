#include "iostream"
using namespace std;

#ifndef TESTC_DERIVED_H
#define TESTC_DERIVED_H


#include "Base1.h"
#include "Base2.h"

class Derived: public Base1, public Base2{
public:
    int var;
    void fun(){
        cout <<"Member of Derived..." << endl;
    }
};


#endif //TESTC_DERIVED_H
