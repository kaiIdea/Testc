#include "iostream"

using namespace std;

class Point{

public:
    explicit Point(int xx,int yy);
    explicit Point(int xx);
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

Point::Point(int i) {
    this->x = i;
}
