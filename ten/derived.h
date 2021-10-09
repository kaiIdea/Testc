#include "iostream";
using namespace std;


#ifndef TESTC_DERIVED_H
#define TESTC_DERIVED_H


#include "base.h"

class derived: public base{
public :
    void print( ) { cout << "In derived" << endl; }
};



#endif //TESTC_DERIVED_H
