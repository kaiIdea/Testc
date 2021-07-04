

#include "Derived.h"

int main20(){
    //声明定义 Derived对象
    Derived d;
    //创建一个 Derived类型的指针，赋予对象地址
    Derived *p = &d;

    d.var = 1;
    d.fun();
    //Java是单继承，故不用使用父类
    d.Base1::var = 2;
    d.Base1::fun();


    d.Base2::var = 3;
    d.Base2::fun();
}
