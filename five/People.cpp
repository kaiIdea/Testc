#include "iostream"

#include "People.h"

People::People() {}

People::People(string name, int age): name(name),age(age) {}

void People::display() {
    cout << "Pepole输出..."<<endl;
}
