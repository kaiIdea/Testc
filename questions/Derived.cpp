//
// Created by GEEX1428 on 2021/9/15.
//

#include "Derived.h"


int main45(){
    Base b(3);
    Derived d(6,7);
    b.showbase();
    d.showderived();
    b = d;
    b.showbase();
    Base b1(6);
    b1.showbase();
    Base* pb=&b1;
    pb->showbase();
    d.showderived();
    b.showbase();
    return 0;
}
