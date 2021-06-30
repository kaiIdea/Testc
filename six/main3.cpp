#include "iostream"

using namespace std;

void splitFloat(float f,int *ptr,float *floatPtr){
    int a = f;
    ptr = &a;
    cout << "a = " << a << endl;
    cout << "a address = " << ptr << endl;
    float b = f - a;
    floatPtr = &b;
    cout << "b = " << b << endl;
    cout << "b address = " << floatPtr << endl;

}


int main17(){
/*    cout << "Enter 3 float point numbers:" << endl;
    for (int i =0;i<3;i++){
        float x,f;
        int n;
        cin >> f;
        splitFloat(f,&n,&x);
    }*/
    //分配sizeof(int)字节的内存，声明num变量，将内存地址指向num变量，然后修改内存空间里的值为10.
    //int 类型为4bit. 返回的地址为内存起始地址，偏移4个字节，则为整个int变量在内存中的存储空间。
    //num = 10,只需要占用1个bit的空间，其它的都为0
    int num = 10;
    int *p = &num;
    cout << "num = " << num << endl;
    cout << "&num =" << &num << endl;
    cout << "p =" << p << endl;
    cout << "*p =" << *p << endl;

    // *p表示解引用，找到p指向的内存空间，进行读写操作。
    *p = 11;
    cout << "update num = " << num << endl;

    cout << "sizeof = " << sizeof(*p) << endl;
//    cout << "pt1 address = " << ptr << endl;
//    cout << "floatPtr1 address = " << floatPtr << endl;
    return 0;
}

