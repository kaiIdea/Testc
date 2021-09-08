#include "iostream"
using namespace std;

#include "BinSearch.h"

template<class T>
void BinSearch<T>::binSearch(const T *array, int size, const T &key) {
    int low = 0;
    int high = size-1;
    while (low <= high){
        int middle = (low+high)/2;
        if(key < array[middle]){
            high = middle-1;
        } else if(key == array[middle]){
            cout << "index: " << middle << endl;
            cout << "value: " << array[middle] << endl;
            return;
        } else{
            low = middle+1;
        }
    }
}

int main29(){
    int array[] = {2,5,14,56,78,98,102,111,148,256};
    int size = 10;
    BinSearch<int> search;
    search.binSearch(array,size,102);
}
