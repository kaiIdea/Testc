using namespace std;

#ifndef TESTC_PEOPLE_H
#define TESTC_PEOPLE_H


class People {

public:
    People();
    People(string name,int  age);
    virtual void display();
private:
    string name;
    int age;
};


#endif //TESTC_PEOPLE_H
