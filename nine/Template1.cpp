#include "iostream"
using namespace std;
#include "Template1.h"


template<typename T>
T abs(T x){
    return x<0?-x:x;
}

int main25(){
    int n = -5;
    double d = -5.5;
    cout << abs(n) << endl;
    cout << abs(d) << endl;
    return 0;
}
