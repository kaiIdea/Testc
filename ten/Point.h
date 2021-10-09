//
// Created by GEEX1428 on 2021/9/28.
//

#ifndef TESTC_POINT_H
#define TESTC_POINT_H


class Point {
private:
    float x;


public:
    void f(float a){
        x = a;
    }
    void f(){
        x = 0;
    }
    friend float max(Point &a,Point &b);
};

float max(Point &a,Point &b){
    return a.x > b.x?a.x:b.x;
}


#endif //TESTC_POINT_H
