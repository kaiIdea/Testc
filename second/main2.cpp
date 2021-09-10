#include "iostream"
#include "iomanip"

using namespace std;



class f{
private:
    int x = 0,y = 0;
public:
    void f1(int a,int b){
        x = a;
        y = b;
    }
    void get(){
        cout<<x<<""<<y<<endl;
    }
};


int main33(){
//    int a,b;
//    cin>>a>>b;
//    cout << "a= " << a <<endl;
//    cout << "b= " << b <<endl;
//    cout << "a+b= " << a+b <<endl;
    //std::cout<< setw(5) << setprecision (3) << 0.1415 << endl;
    //int a = 29,b = 100;
    //cout <<setw (3) <<a<<b<< endl;

    cout <<"Hex："<< hex << 255;


    f a;
    a.f1(1,3);
    a.get();
    return 0;
}