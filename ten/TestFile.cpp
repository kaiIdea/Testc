#include "iostream"
using namespace std;
#define PI 3.14
#include "TestFile.h"

int main(){
//    double i;
//    int r;
//    cout<<"输入圆形半径：";
//    cin>>r;
//    i=2 * PI * r;
//    cout<<"圆形周长="<<i<<endl;
//    i=PI * r * r;
//    cout<<"圆形面积="<<i<<endl;



    TestFile cls;
    cls. print(10,20);
    cls.print('c',1);
    cls. print('x','y');
    cls. print('Hello!',0);
}
