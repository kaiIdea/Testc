#include "iostream"

using namespace std;

int main6(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Number " << n << " Factors ";




    for (int i = 1; i <=n ; ++i) {
        if(n % i ==0)
            cout << i << " ";
        cout<<endl;
    }
    return 0;
    
    
}