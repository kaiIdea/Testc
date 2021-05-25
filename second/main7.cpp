#include "iostream"

using namespace std;


enum WeekDay {SUN =7,MON = 1,TUE = 2,WES = 3,THU = 4,FRI = 5,SAT = 6};
int main7(){
    WeekDay weekDay;

    WeekDay nowDay = SUN;

    for (int i = MON; i <= SUN ; ++i) {
        weekDay = WeekDay(i);
        if(weekDay == nowDay){
            cout << "Year,it's all right!  " << weekDay;
            continue;
        }
        cout << "no it's wrong!  " << weekDay << endl;
    }
    return 0;


}





