#include "iostream"
using namespace std;


double power(int a,int b){
    double result = 1;
    while (b--){
        result*=a;
    }
    return result;
}

int main10(){
    cout << "Hello main.cpp"<<endl;
    double result = power(2,0);
    cout << "result = " << result;

    int c = 8 >> 1;

    cout << "c= " << c << endl;
    return 0;
}


