#include "iostream"
using namespace std;

#include "Test1.h"

void copy(int &a,int &b){

}


int main(){
//    Test1 *a,b;
//    b.set(1.6,3.8);
//    a = &b;
//    //a->get();
//    int *x,y;
//    x = &y;
//    //a.set(2,3);
//    int s,l;
//    copy(s,l);


    int x=8,y=6;
    const int*const p=&x;
    x=y;


    int a = 10,b = 11;
    const int *c = &a;
    a = b;

    int *const d = &b;
    b = a;

    cout<<* p<<endl;

}
