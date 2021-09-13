#include "iostream"
using namespace std;

#include "Complex2.h"

int Complex2::getValue() {
    return this->value;
}
Complex2 & Complex2::operator++() {
    value++;
    return *this;
}

Complex2 Complex2::operator++(int i) {
    Complex2 result(*this);
    value++;
    return result;
}

Complex2 & Complex2::operator--() {
    this->value--;
    return *this;
}
Complex2 Complex2::operator--(int i) {
    Complex2 result(*this);
    value--;
    return result;
}

Complex2::operator int() {
    return value;
}
int main(){
//    Complex2 c2(0);
//    cout << "初始值:"<<c2<<endl;
//    cout << "后置+= " <<(c2++)<<endl;
//    cout << "后置+后:"<<c2<<endl;
//    cout << "前置+= " <<(++c2)<<endl;
//    cout << "前置+后:"<<c2<<endl;
//
//
//    cout<<"后置-= "<< (c2--)<<endl;
//    cout<<"前置-= "<<(--c2)<<endl;


    //后置返回旧值，前置返回新值


    int count = 0;
    //后置一直返回旧值
    cout<<"test1:"<<count++<<endl;
    cout<<"输出值:"<<count<<endl;


    cout<<"test2:"<<count++<<endl;
    cout<<"输出值:"<<count<<endl;


    cout<<"test3:"<<++count<<endl;
    cout<<"输出值:"<<count<<endl;

    cout<<"test4:"<<count++<<endl;
    cout<<"输出值:"<<count<<endl;

    cout<<"test5:"<<++count<<endl;
    cout<<"输出值:"<<count<<endl;
}