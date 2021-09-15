using namespace std;
#include "iostream"
#include "Base.h"

#ifndef TESTC_DERIVED_H
#define TESTC_DERIVED_H


class Derived : public Base {
private:
    int y;
public:
    Derived(int a, int b) : Base(a) { y = b; }
    void showderived() { cout << "x=" << get() << "，y=" << y << endl; }
};





#endif //TESTC_DERIVED_H
