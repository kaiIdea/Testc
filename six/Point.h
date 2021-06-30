#include "iostream"

using namespace std;
class Point{
private:
    int x,y;

public:
    Point():x(0),y(0){
        cout << "Default Constructor called..." << endl;
    }

    Point(int x,int y):x(x),y(y){
        cout << "Constructor called..." << endl;
    }
    ~Point(){
        cout << "Destructor called..." << endl;
    }

    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }

    void move(int newX,int newY){
        this->x = newX;
        this->y = newY;
    }

};