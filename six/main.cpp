#include "iostream"

using namespace std;

int main1(){
    int i;
    int *ptr = &i;
    //i = 10;
    //7732764
    cout << "initial i= " << &i <<endl;
    cout << "initial *ptr= " << ptr << endl;

    i = 10;
    cout << " i= " << &i <<endl;
    cout << " *ptr= " <<&ptr << endl;

    cout << " i value= " << i <<endl;
    cout << " *ptr value= " << ptr << endl;

    int j = 20;
    //7732748
    cout << "j-address = "<< &j << endl;
    //7732744
    int c = 30;
    cout << "c-address = "<< &c << endl;




    cout << "math ptr = "<< *(ptr-5)<<endl;
    return 0;
}


