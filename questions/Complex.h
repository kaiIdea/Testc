//
// Created by GEEX1428 on 2021/9/13.
//

#ifndef TESTC_COMPLEX_H
#define TESTC_COMPLEX_H


class Complex {


    friend Complex operator-(const Complex &A,const Complex &B);
    friend Complex operator+(const Complex &A,const Complex &B);
public:
    Complex();
    Complex(double real,double imag);

    //Complex operator+(const Complex &A)const;
    void display()const;

private:
    double m_real;//实部
    double m_imag;//虚部
};
Complex operator-(const Complex &A,const Complex &B){
    Complex result;
    result.m_real = A.m_real-B.m_real;
    result.m_imag = A.m_imag-B.m_imag;
    return result;
}
Complex operator+(const Complex &A,const Complex &B){
    Complex result;
    result.m_real = A.m_real+B.m_real;
    result.m_imag = A.m_imag+B.m_imag;
    return result;
}

#endif //TESTC_COMPLEX_H
