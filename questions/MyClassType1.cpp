#include "iostream"
using namespace std;

#include "MyClassType1.h"

void MyClassType1::sety(int y0) {
    y = y0;
}
void MyClassType1::displayx() {
    cout << "x = "<<x<<endl;
}
void MyClassType1::displayy() {
    cout << "y =" << y <<endl;
}
int MyClassType1::gety() {
    return y;
}

int main38(){
    MyClassType1 obj1,*p,objArr[10];
    obj1.setx(111);
    obj1.displayx();

    p = new MyClassType1;
    (*p).setx(56);
    p->sety(78);

    int k = p->getx();
    int m = p->gety();
    cout << "k = "<<k<<endl;
    cout << "m = "<<m<<endl;

    for(int i =0;i<5;i++){
        objArr[i].setx(i+10);
        objArr[i].sety(i+20);
    }

    p = &objArr[9];

    while (p >= &objArr[5]){
        p->setx(88);
        p->sety(99);
        p--;
    }
    for (int i =0;i<10;i++){
        cout << objArr[i].getx()<<"  "<<objArr[i].gety()<<endl;
    }
}
