#include "iostream"

using namespace std;

int main3(){
    int x,y;
    cout << "Enter X And Y:";
    cin >> x >> y;
    cout<<"X= " << x <<endl;
    cout<<"Y= " << y <<endl;

    if(x > y)
        cout << "x>y" << endl;
    if(x < y)
        cout << "x<y" << endl;
    else
        cout << "x=y" << endl;
    return 0;
}