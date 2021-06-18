#include "iostream"

using namespace std;


int main16(){
    int array[5];
    cout << "array =" << array << endl;
    int *ptr;
    //7798272
    array[0] = 11;
    ptr = &array[0];
    cout << "array_0 =" << &array[0] << endl;

    //7798276
    array[1] = 22;

    cout << "array_1 =" << &array[1] << endl;
    //7798280
    array[2] = 102;
    cout << "array_2 =" << &array[2] << endl;

    //指针运算时，
    cout << "math ptr =" << *(ptr+2) << endl;
    return 0;
}