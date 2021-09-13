#include "iostream"
using namespace std;

#ifndef TESTC_COMPLEX1_H
#define TESTC_COMPLEX1_H


class Complex1 {


    friend Complex1 operator+(const Complex1 &A,const Complex1 &B);
    friend Complex1 operator-(const Complex1 &A,const Complex1 &B);
    friend Complex1 operator*(const Complex1 &A,const Complex1 &B);
    friend Complex1 operator/(const Complex1 &A,const Complex1 &B);

public:
    Complex1(double m_real = 0.00,double m_imag = 0.00):m_imag(m_imag),m_real(m_real){}
public:
    friend istream & operator>>(istream & in,Complex1 &A);
    friend ostream & operator<<(ostream &in,Complex1 &A);
private:
    double m_real;
    double m_imag;
};

Complex1 operator+(const Complex1 &A,const Complex1 &B){
    Complex1 result;
    result.m_real = A.m_real+B.m_real;
    result.m_imag = A.m_imag+B.m_imag;
    return result;
}

Complex1 operator-(const Complex1 &A,const Complex1 &B){
    Complex1 result;
    result.m_real = A.m_real-B.m_real;
    result.m_imag = A.m_imag-B.m_imag;
    return result;
}

istream & operator>>(istream &in,Complex1 &A){
    in >> A.m_real >> A.m_imag;
    return in;
}
#endif //TESTC_COMPLEX1_H
