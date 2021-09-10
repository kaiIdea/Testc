//
// Created by YangKai on 2021/9/10.
//

#ifndef TESTC_TEST2_H
#define TESTC_TEST2_H


class Test2 {
    int a,b;
    int getmin(){
        return (a<b?a:b);
    }

public:
    int c;
    void setValue(int x1,int x2,int x3){
        a= x1;b=x2;c= x3;
    }
    int GetMin();
};

int Test2::GetMin() {
    int d= getmin();
    return (d=d<c?d:c);
}


#endif //TESTC_TEST2_H
