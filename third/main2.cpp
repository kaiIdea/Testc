#include "iostream"

using namespace std;

//求指数结果
double power1(int a,int n){
    double result = 1;
    while (n--){
        result*=a;
    }
    return result;
}

//循环8位二进制码，指数结果相加。得十进制值
double add(int bit,int base){
    double result = 0;
    for(int i = bit-1;i>=0;i--){
        char c;
        cin >> c;
        if('1' == c){
            result+= power1(base,i);
        }
    }
    return result;
}
int main11(){
    cout<<"Hello main9.cpp!" << endl;
    double a;
    cout << "Enter an 8 bit binary number:";
    cout << "result = " << add(8,2);
    return 0;
}

