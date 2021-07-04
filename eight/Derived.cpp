#include "iostream"
using namespace std;
#include "Derived.h"

void Derived::display() {
    cout << "Derived::display()..."<<endl;
}

void fun(Base1 *ptr){
    ptr->display();
}

int main(){
    Base1 base1;
    Base2 base2;
    Derived derived;
    fun(&base1);
    fun(&base2);
    fun(&derived);
}
