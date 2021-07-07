#include "iostream"
using namespace std;

#include "Store.h"


template<class T>
Store<T>::Store(): haveValue(false){}

template<class T>
T &Store<T>::getItem() {
    if(!haveValue){
        cout <<  "No item present..." << endl;
        //程序完全退出，返回到操作系统
        exit(1);
    }
    return item;
}


template<class T>
void Store<T>::putItem(const T &t) {
    if(!haveValue){
        haveValue = true;
        item = t;
    }
}