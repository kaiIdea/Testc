#include "iostream"
#include "Point.h"

using namespace std;
class Line{

public:
    explicit Line(Point p1,Point p2);
    explicit Line(Point p1);


    int getX();
private:
    int x,y;
};


int Line::getX() {
    return this->x;
}

int main(){
    Line line(static_cast<Point>(1),4);
    //Line line1(11,12);
    //Line line1(1,2);
    //Line line2(10);
    cout << Line(1).getX()<<endl;
    cout << Line(11,12).getX()<<endl;
}