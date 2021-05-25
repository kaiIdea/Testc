#include "iostream"

using namespace std;

int main5(){
//    int n,right_digit,newNum = 0;
//    cout << "Enter the number:";
//    cin >> n;
//    cout << "The number in reverse order is ";
//    do {
//        right_digit = n%10;
//        cout << right_digit;
//        n/=10;
//    } while (n != 0);
//        cout << endl;

    int i = 1,sum = 0;
    do {
        sum+=i;
        i++;
    } while (i<=10);
    cout << "sum = " <<sum;
    return 0;

}