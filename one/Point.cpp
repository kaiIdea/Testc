#include "iostream"
using namespace std;

#include "Point.h"

point::point(point &t) {
    n = t.n;
    m = t.m;
}

point::point(int a, int b) {
    n = a;
    m = b;
}

int main34(){
    int a1 = 10;
    int a2 = 88;
    //const第一，可以修改指针指向地址,或者修改引用地址存储的值。
    //如：const int *a3 = &a1;
    //修改a3以下方式：
    // 1.a3 = &a2;
    //2. a2 = 110;
    const int *a3 = &a1;
    cout << "a3 =" << a3 << endl;
    cout << "*a3 =" << *a3 << endl;
    a3 = &a2;
    cout<<"值修改后1："<<endl;
    cout << "a3 =" << a3 << endl;
    cout << "*a3 =" << *a3 << endl;

    a2 = 110;
    cout<<"值修改后2："<<endl;
    cout << "a3 =" << a3 << endl;
    cout << "*a3 =" << *a3 << endl;


    int *const a4 = &a1;
    *a4 = 200;
};
