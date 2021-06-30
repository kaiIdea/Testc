//
// Created by GEEX1428 on 2021/6/21.
//

#ifndef TESTC_ARRAYOFPOINTS_H
#define TESTC_ARRAYOFPOINTS_H


#include "Point.h"

class ArrayOfPoints {


private:
    int size;
    Point *point;


public:
    ArrayOfPoints(int size) : size(size){
        point = new Point[size];
    }
    ~ArrayOfPoints(){
        delete[] point;
    }

    Point &element(int index){

    }
};


#endif //TESTC_ARRAYOFPOINTS_H
