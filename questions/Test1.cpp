#include "iostream"
#include "cmath"
#include "string"

using namespace std;
#include "Test1.h"
//第一章 课后练习题

//四，2
void test1(){
    int oneInt = 1;
    int &ref = oneInt;

    ref = 2;
    cout << "oneInt:"<<oneInt<<"ref:"<<ref<<endl;

    int *p = &ref;
    *p = 3;
    cout << "ref:" <<ref << "p:"<<*p<<endl;

    cout << "ontInt:" <<oneInt <<endl;

    //结果如下：
//    oneInt:2，ref:2
//    ref:3，p:3
//    ontInt:3
}

//四，3
int f(int a){
    int b = 0,c=1;
    b++,c++;
    return int(a+pow(double(b),2)+c);
}
//int i;
//for (i = 0;i<3;i++){
//cout << f(i) << endl;
//}
//结果如下:
//3
//4
//5


//四，4
int bigger(int x,int y){
    if(x > y)return x;
    else return y;
}
float bigger(float x,float y){
    if(x > y)return x;
    else return y;
}

double bigger(double x,double y){
    if(x > y)return x;
    else return y;
}

//int xI = 10,yI=20;
//float xF= 30,yF=40;
//double xD = 50,yD=60;
//cout <<bigger(xI,yF)<<endl;

//具有相同函数名的两个及以上的函数，其形参的个数或者参数类型不同，编译器根据实参和形参的类型以及个数最佳匹配，自动确定调用那个函数。
//这就是函数的重载以及调用


//五，1
void test5_1(){
    string *array;
    int n;
    cout << "请输入数组大小："<<endl;
    cin >> n;
    array = new string[n];

    for(int i = 0;i<n;i++){
        cout <<"请输入第 " << i+1 <<"个元素："<<endl;
        cin >> array[i];
    }
    delete[] array;
}
int main36(){
    test5_1();
};


