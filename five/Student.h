//
// Created by GEEX1428 on 2021/9/14.
//

#ifndef TESTC_STUDENT_H
#define TESTC_STUDENT_H

#include "People.h"

class Student: public People{


public:
    int value = 100;
    Student(int score):People(){};
    virtual void display();
private:
    int score;
};


#endif //TESTC_STUDENT_H
