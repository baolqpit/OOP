#include "Clock.h"
using namespace std;

void Clock::setHour(){
    cout << "Input Hour: ";
    cin >> this->hour;
}

int Clock::getHour(){
    return this->hour;
}

void Clock::setMinute(){
    cout << "Input Minute: ";
    cin >> this->minute;
}

int Clock::getMinute(){
    return this->minute;
}

void Clock::setSecond(){
    cout << "Input Second: ";
    cin >> this->second;
}

int Clock::getSecond(){
    return this->second;
}

void Clock::Increase1Second(){
    if (hour == 59 && minute == 59 && second == 59){
        this->second = 0;
        this->minute = 0;
        this->hour = 0;
    }
    else if (minute == 59 && second == 59){
        this->hour++;
        this->second = 0;
        this->minute = 0;
    }
    else if (second == 59){
        this->minute++;
        this->second = 0;
    }
    else {
        this->second++;
    }
}

void Clock::Reduce1Second(){
    if (hour == 0 && minute == 0 && second == 0){
        this->hour = 59;
        this->minute = 59;
        this->second = 59;
    }
    else if (minute == 0 && second ==0){
        this->hour--;
        this->minute = 59;
        this->second = 59;
    }
    else if (second == 0){
        this->minute--;
        this->second = 0;
    }
    else{
        this->second--;
    }        
} 

void Clock::ReduceXSecond(){
    int x;
    cout << "\nType x: ";
    cin >> x;

    if (hour == 0 && minute == 0 && second - x < 0){
        this->hour = 59;
        this->minute = 59;
        this->second = 59;
    }
    else if (minute == 0 && second - x < 0){
        this->hour--;
        this->minute = 59;
        this->second = 59;
    }
    else if (second - x < 0){
        this->minute--;
        this->second = 0;
    }
    else{
        this->second -=  x;;
    }        
}

void Clock::IncreaseXSecond(){
    int x;
    cout << "\nType x: ";
    cin >> x;

    if (hour == 59 && minute == 59 && second + x > 59){
        this->second = 0;
        this->minute = 0;
        this->hour = 0;
    }
    else if (minute == 59 && second + x > 59){
        this->hour++;
        this->second = 0;
        this->minute = 0;
    }
    else if (second + x > 59){
        this->minute++;
        this->second = 0;
    }
    else {
        this->second += x;
    }
}

void Clock::display(){
    if (hour > 24)
        this->hour %= 24;
    if (minute > 60)
        this->minute %= 60;
    if (second > 60)
        this->second %= 60;
    cout << endl << this->hour << "h" << this->minute << "m" << this->second << "s";
}

