#include "Point.h"

int main19(){
    cout << "Step one..." << endl;

    Point *p = new Point;
    delete p;


    cout << "Step two..." << endl;

    p = new Point(1,2);
    delete p;

    return 0;

}
