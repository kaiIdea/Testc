
#ifndef TESTC_ANIMAL_H
#define TESTC_ANIMAL_H


class Animal {

public:
    virtual void getAnimalInfo();

    void process(Animal *animal);

private:
    int age;
    int color;
};


#endif //TESTC_ANIMAL_H
