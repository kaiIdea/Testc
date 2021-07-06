#include "iostream"
using namespace std;

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

void Animal::getAnimalInfo() {
    cout << "getAnimalInfo: this‘s base animal..." << endl;
}

int main(){
    //虚函数，是多态的基础。
    //派生类，覆盖基类虚函数，
    //创建基类指针指向派生类实例
    //用基类指针调用同名方法，
    Animal *animal1 = new Animal;
    Animal *animal2 = new Cat;
    Animal *animal3 = new Dog;


    animal1->getAnimalInfo();
    animal2->getAnimalInfo();
    animal3->getAnimalInfo();


    Dog *d = dynamic_cast<Dog*>(animal3);
    return 0;
}
