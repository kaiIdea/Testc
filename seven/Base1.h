#include "iostream"

using namespace std;

#ifndef TESTC_BASE1_H
#define TESTC_BASE1_H


class Base1 {
public:
    int var;
    void fun(){
        cout << "Member of Base1..." << endl;
    }
};


#endif //TESTC_BASE1_H
