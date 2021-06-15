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

int main14(){
}