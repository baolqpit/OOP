#include "Clock.h"
#include "Clock.cpp"
using namespace std;

int main(){
    Clock c;
    c.setHour();
    c.setMinute();
    c.setSecond();

    int n;
    do{
        cout << "\nType n: ";
        cin >> n;
        if (n == 1)
            c.Increase1Second();
        else if (n == 2)
            c.Reduce1Second();
        else if (n == 3)
            c.IncreaseXSecond();
        else if (n == 4)
            c.ReduceXSecond();
        else if (n == -1){
            c.display();
            break;
        }           
    }while(1);
    return 0;
}