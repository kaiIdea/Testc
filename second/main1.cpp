#include "iostream"

int main1(){
    std::cout<< "Hello main1.cpp"<<std::endl;
    int a = 3,b=5;
    char c = a&b;
    std::cout << c << std::endl;
    char d = '3';
    d = d & 0xfe;
    std::cout << d << std::endl;
    return 0;
}