//
// Created by GEEX1428 on 2021/7/7.
//

#ifndef TESTC_STORE_H
#define TESTC_STORE_H

template<class T>
class Store {
private:
    T item;
    //表示item中，是否被存入内容
    bool haveValue;

public:
    Store();
    T & getItem();
    void putItem(const T &t);
};


#endif //TESTC_STORE_H
