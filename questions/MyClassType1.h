//
// Created by YangKai on 2021/9/10.
//

#ifndef TESTC_MYCLASSTYPE1_H
#define TESTC_MYCLASSTYPE1_H


class MyClassType1 {
private:
    int x,y;
public:
    int getx(){
        return x;
    }
    void setx(int x0){
        x = x0;
    }
    int gety();
    void sety(int y0);
    void displayx();
    void displayy();
};


#endif //TESTC_MYCLASSTYPE1_H
