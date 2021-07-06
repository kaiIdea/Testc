#include "iostream"
using namespace std;

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

void Animal::getAnimalInfo() {
    cout << "getAnimalInfo: this‘s base animal..." << endl;
}

void Animal::process(Animal *animal) {
    animal->getAnimalInfo();

    Dog *d = dynamic_cast<Dog *>(animal);
    d->talk();
}

int main(){
    //虚函数，是多态的基础。
    //派生类，覆盖基类虚函数，
    //创建基类指针指向派生类实例
    //用基类指针调用同名方法，
    Animal *animal1 = new Animal;
    Animal *animal2 = new Cat;
    Animal *animal3 = new Dog;


    animal1->process(animal1);
    //animal2->process(animal2);
    //animal3->process(animal3);

    return 0;
}
