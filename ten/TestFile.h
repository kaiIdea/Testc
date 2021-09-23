#include "iostream"
//using namespace std;

#ifndef TESTC_TESTFILE_H
#define TESTC_TESTFILE_H


class TestFile {
private:
    int x,y;
public:
    TestFile(int a=0,int b=1);
    void show();
    void print(int a,int b) {
        cout<< "1int："<< a << endl;
        cout << "1int："<< b << endl;
    }
    void print(char * a,char * b) {
        cout<< "2string："<< a << endl;
        cout <<"2string："<< b << endl;
    }
    void print(char * a,unsigned int b){
        cout << "3string："<< a << endl;
        cout << "3int："<< b << endl;
    }

};


TestFile::TestFile(int a, int b) {
    x = a;
    y = b;
}


void TestFile::show() {
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}


#endif //TESTC_TESTFILE_H
