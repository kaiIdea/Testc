//
// Created by GEEX1428 on 2021/9/13.
//

#ifndef TESTC_COMPLEX2_H
#define TESTC_COMPLEX2_H


class Complex2 {
public:
    Complex2(int value = 0):value(value){};

    Complex2 &operator++();
    Complex2 &operator++(int i);


    Complex2 &operator--();
    Complex2 &operator--(int i);


public:
    int getValue();
private:
    int value;
};


#endif //TESTC_COMPLEX2_H
