#include "iostream"

using namespace std;

class Point{

public:
    Point(int xx,int yy);
    int getX();
    int getY();
private:
    int x,y;
};

int Point::getX() {
    return this->x;
}

int Point::getY() {
    return this->y;
}