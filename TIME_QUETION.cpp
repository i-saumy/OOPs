#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void displayTime()
    {
        cout << "H: " << hours << " M:" << minutes << endl;
    }
    Time operator+=(Time t)
    {
        minutes += minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
    Time operator-=(Time t)
    {
        minutes -= minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
    Time operator*=(Time t)
    {
        minutes *= minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
    Time operator%=(Time t)
    {
        minutes %= minutes;
        if (minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
};

int main()
{
    Time t1(11, 59);
    t1 += t1;
    t1.displayTime();
    t1 -= t1;
    t1.displayTime();
    t1 *= t1;
    t1.displayTime();
    t1 %= t1;
    t1.displayTime();

    return 0;
}
