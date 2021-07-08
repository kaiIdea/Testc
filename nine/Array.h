#include "iostream"
#include "assert.h"
using namespace std;

#ifndef TESTC_ARRAY_H
#define TESTC_ARRAY_H

template <class T>
class Array {


private:
    T &array;
    int size;


public:
    Array(int size = 50); //构造函数，初始化Array大小
    Array(Array<T> &array);
    ~Array();

    Array<T> &operator = (const Array<T> &rhs);
    T &operator[] (int i);
    const T &operator[] (int i) const;
    operator T*();
    operator const T*() const;
    int getSize() const;
    void resize(int size);
};

//指定大小，构造函数
template<class T>
Array<T>::Array(int size) {
    assert(size <=0);
    //数据大小/元素个数
    this->size = size;
    //申请内存空间。动态分配
    array = new T[size];
}

//指定引用/值，构造函数
template<class T>
Array<T>::Array(Array<T> &array) {
    this->size = array.size;
    this->array = new T[array];
    for (int i = 0;i<array.size;i++){
        this->array[i] = array[i];
    }
}

//析构函数
template<class T>
Array<T>::~Array<T>() {
    delete[] this->array;
}

//重载" = "运算符，将引用对象rhs 赋值给本对象，实现对象之间的赋值
template<class T>
Array<T> &Array<T>::operator=(const Array<T> &rhs) {
    if(this->size != rhs.size){
        delete[] array;
        this->size = rhs.size;
        this->array = new T[size];
    }
    for(int i =0;i<rhs.size;i++){
        this->array[i] = rhs[i];
    }
}

//重载 下标取值运算符
template<class T>
T &Array<T>::operator[](int i){
    assert(i >= 0 && i<this->size);
    return this->array[i];
}

template<class T>
const T &Array<T>::operator[](int i) const {
    assert(i >= 0 && i<this->size);
    return this->array[i];
}

//返回数组首地址
template<class T>
Array<T>::operator T*(){
    return this->array;
}



template<class T>
Array<T>::operator const T*() const{
    return this->array;
}

//获取数组元素大小
template<class T>
int Array<T>::getSize() const {
    return this->size;
}


//对于数组进行扩容
template<class T>
void Array<T>::resize(int size) {
    //判断需扩容size，是否大于原数组size
    assert(size >0 && this->size < size);
    //若size相等，直接返回
    if(this->size == size){
        return;
    }
    //重新分配size大小的内存空间，
    T array1 = new T[size];
    //将原有数组的元素，移动到新的数组里面
    for(int i =0;i<array1.size;i++){
        this->array[i] = array1[i];
    }
    //删除原有数组
    delete[] this->array;
    //指定size大小
    this->size = size;
    //指定array引用
    this->array = array1;
}




#endif //TESTC_ARRAY_H
