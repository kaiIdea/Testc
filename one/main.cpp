#include "iostream"
using namespace std;

#include "main.h"

int main31(){

    cout << "1111" <<endl;

    int oneInt = 10;

    int *p = &oneInt;
    cout << "p:" << p <<endl;
    cout << "*p:" << *p <<endl;
    *p = 20;
    cout << "p:" << p <<endl;
    cout << "*p:" << *p <<endl;


    const int twoInt = 15;

    const int &ref = twoInt;
    cout << "ref:" << ref <<endl;
    cout << "&ref:" << &ref <<endl;

    //指针
    //不带指针符号，打印内存地址
    //带指针符号，打印地址对应的变量值

    //引用
    //不带引用符号，打印地址对应的值
    //带符号，打印内存地址

    return 0;
};
