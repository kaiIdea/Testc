#include "iostream"
using namespace std;

#include "main1.h"

int main(){
    int y = 88;
    int a1 = 3;
    //常量的值不能改变
    const int a2 = a1;
    cout << "a1:" <<a1 << endl;
    cout << "a2:" <<a2 << endl;

    const int *a3 = &a1;

    cout << "a3:"<<a3<<endl;
    cout << "*a3:"<<*a3<<endl;


    //const为第一个标识符，修饰int型常量，代表指向常量的指针，证明指针指向地址不可修改。但地址存储的值可以修改，如下
    //改变a1的值，
    a1 = 1100;
    cout << "a3:"<<a3<<endl;
    cout << "*a3:"<<*a3<<endl;

//    a3:0x8cfeb0
//    *a3:3
//    a3:0x8cfeb0
//    *a3:1100
// 指针指向的地址没有修改，但是地址存储的值，发生变化



    //const不是第一个标识符时，修饰其左侧的内容
    //左侧为* 代表这个指针为常量，指针所指向的地址或者说初始化指向的地址，不能在改变指向。但是可以修改地址所指向的内容
    int * const a4 = &y;
    cout << "a4:"<<a4<<endl;
    cout << "*a4:"<<*a4<<endl;
    //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

    *a4 = 10;
    cout << "a4:"<<a4<<endl;
    cout << "*a4:"<<*a4<<endl;
    return 0;
}
