#include <iostream>
#include <string>
using namespace std;

int main0() {
    std::cout << "Hello, World!" << std::endl;

    //运算符，i++ 变量i 自增长1，并更新内存值，输出打印时，返回自增前的值。
    //运算符，++i 自增长1，更新内存值，输出打印时，返回自增后的值。

    int i = 0;
    std::cout<< i++ << std::endl;
    i = i+0;
    std::cout<< "计算后得值:";
    std::cout<<i<<std::endl;

    std::cout<< "变量i字节大小为:";
    std::cout<<sizeof i << std::endl;

    char c = 'a';
    std::cout<< "变量c字节大小为:";
    std::cout<<sizeof c << std::endl;
    //std::cout <<++i << std::endl;

    float math1 = 3.1415926;
    std::cout<< "变量math1字节大小为:";
    std::cout<<sizeof math1 << std::endl;

    double math2 = 3.1415926;
    std::cout<< "变量math2字节大小为:";
    std::cout<<sizeof math2 << std::endl;
    return 0;
}

