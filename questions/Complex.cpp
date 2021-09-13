#include "iostream"
using namespace std;

#include "Complex.h"

Complex::Complex(double real, double imag) {
    this->m_real = real;
    this->m_imag = imag;
}

Complex::Complex():m_real(0.00),m_imag(0.0) {}

//Complex Complex::operator+(const Complex &A) const {
//    Complex B;
//    B.m_real = this->m_real+A.m_real;
//    B.m_imag = this->m_imag+A.m_imag;
//    return B;
//}

void Complex::display() const {
    cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}

int main40(){
    Complex c1(4.3,5.8);
    Complex c2(2.4,3.7);

    Complex c3;
    //编译成功后，c3 = c1.operator+(c2);
    //直接写，c3 = c1+c2;
    c3 = c1+c2;
    c3.display();
}

