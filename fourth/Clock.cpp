#include "iostream"
using namespace std;



class Clock{
public:
    void setTime(int hour,int minute,int second);
    void showTime();
private:
    int hour,minute,second;
};


void Clock::setTime(int hour, int minute, int second) {
    this->hour = hour;
    this->minute=minute;
    this->second=second;
}

inline void Clock::showTime() {
    cout << "Time- "<< this->hour <<":"<<this->minute<<":"<<this->second<<endl;
}

int main12(){
    Clock myClock;
    myClock.setTime(16,35,21);
    myClock.showTime();
}