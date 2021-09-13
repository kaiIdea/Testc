#include "iostream"
using namespace std;

#include "Complex2.h"

int Complex2::getValue() {
    return this->value;
}
Complex2 & Complex2::operator++() {
    ++value;
    return *this;
}

Complex2 & Complex2::operator++(int i) {
    Complex2 result = *this;
    ++*this;
    return result;
}

Complex2 & Complex2::operator--() {
    this->value--;
    return *this;
}
Complex2 & Complex2::operator--(int i) {
    Complex2 result(i);
    result.value--;
    return result;
}

int main41(){
    Complex2 c2(0);
    cout << "初始值:"<<c2.getValue()<<endl;
    cout << "前置+= " <<(++c2).getValue()<<endl;
    cout << "后置+= " <<(c2++).getValue()<<endl;


    cout<<"后置-= "<< (c2--).getValue()<<endl;
    cout<<"前置-= "<<(--c2).getValue()<<endl;
}