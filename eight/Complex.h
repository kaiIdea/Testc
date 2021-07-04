//
// Created by GEEX1428 on 2021/7/2.
//

#ifndef TESTC_COMPLEX_H
#define TESTC_COMPLEX_H


class Complex {
public:
    Complex(double real = 0.0,double imag = 0.0) : real(real),imag(imag){}
    void display();

private:
    double real;
    double imag;
};


#endif //TESTC_COMPLEX_H
