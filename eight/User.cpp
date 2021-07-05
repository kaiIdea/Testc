#include "iostream"
using namespace std;

#include "User.h"
#include "Student.h"

void User::getInfo() {
    cout <<"User execute..."<<endl;
}

int main(){
    //虚函数，是多态的基础。
    //如果基类里面定义的方法为非需函数。
    //派生类重载基类方法，再用基类指针 指向派生类实例时，用指针调用同名方法，始终调用的是基类的。
    //Student类的对象，在对方法getInfo的调用，在编译器就静态确定了。
    //不管基类指针最后指向的是基类对象，还是派生类对象，只要对象调用的函数不是虚函数，直接忽略。调用基类的函数。
    User *u1 = new User;
    User *u2 = new Student;
    u1->getInfo();
    u2->getInfo();
    return 0;
}