#include "iostream"
using namespace std;
#include "Template2.h"


template<class T>
void outPutArray(T *array,int count){
    for (int i =0;i< count;i++){
        cout << array[i] << " ";
        cout << endl;
    }

}

int main26(){
    int array1[6] = {1,2,3,4,5,6};

    double array2[6] = {1.1,2.2,3.3,4.4,5.5,6.6};

    outPutArray(array1,6);
    outPutArray(array2,6);
}