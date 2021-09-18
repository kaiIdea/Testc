#include <iomanip>
#include "iostream"
using namespace std;

#include "TestFile.h"

void TestFile::setValue(int a, int b) {
    a = a;
    b = b;
}

int main(){
    double pi=3.1415192;
    cout << setprecision(3) << pi;

    TestFile a();

    return 0;
}
