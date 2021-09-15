#include "iostream"
using namespace std;

#include "Student.h"



void Student::display() {
    cout<<"Student输出..."<<endl;
}

int main44(){

    People *p;
    //p = new People("大王",22);
    p = new People();
    p->display();

    p = new Student(100);
    p->display();

    return 0;
}