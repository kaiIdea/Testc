#include "iostream"

using namespace std;

class Circle{

public:
    void getPrice();
    Circle(float r);

private:
    //内环半径
    float r;
    //环线宽度3米
    float t = 3;
    //过道造价 20元/平米
    float aisle = 20;
    //栅栏造假 35元/米
    float fence = 35;
};

Circle::Circle(float r) {
    this->r = r;
}

void Circle::getPrice() {
    //Π
    float a = 3.14;
    //总半径
    int R = r+t;
    float aisleArea = a*R*R-a*r*r;
    float L = 2*a*R;

    float aisleS = aisleArea*this->aisle;
    float fenceL = L*this->fence;
    cout <<"过道需："<<aisleS<<"元"<<endl;
    cout <<"栅栏需："<<fenceL<<"元"<<endl;
}

int main13(){
    int r;
    cout<<"请输入半径："<<endl;
    cin>>r;
    Circle circle(r);
    circle.getPrice();
    return 0;
}