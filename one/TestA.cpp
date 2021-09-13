#include "iostream"
using namespace std;


#include "TestA.h"

int TestA::get(int a) {
    return x+a;
}
TestA::TestA(int a) {
    x = a;
}


int main(){
    char c = 'a';
    cout.put(c+25);
}

