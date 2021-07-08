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

struct Student{
private:
        int id;
        float gpa;
    };


int main27(){
    Store<int> store1;
    store1.putItem(10);
    cout << "item: " << store1.getItem() << endl;

    double a = 3.33;
    Store<double> d1;
    d1.putItem(a);
    cout << "item1: " << d1.getItem() << endl;
    return 0;
}