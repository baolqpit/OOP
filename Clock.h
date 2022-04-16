#pragma once
#include <iostream>
using namespace std;

class Clock{
    private:
        int hour;
        int minute;
        int second;
    public:
        Clock(){};
        void setHour();
        int getHour();
        void setMinute();
        int getMinute();
        void setSecond();
        int getSecond();   
        void setTime(int n);
        void Increase1Second();
        void Reduce1Second();
        void IncreaseXSecond();
        void ReduceXSecond();
        void display();
};