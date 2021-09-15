#include "iostream"
using namespace std;

#ifndef TESTC_TEST3_H
#define TESTC_TEST3_H


class Test3 {

private:
    int x,y;
public:
   void fl(int a,int b){
       this->x = a;
       this->y = b;
   }
   void getValue(){
       cout<<this->x<<this->y<<endl;
   }



};

int main42(){
    //Test3 a;
    //a.fl(1.2,5.3);
    //a.getValue();
}


#endif //TESTC_TEST3_H
