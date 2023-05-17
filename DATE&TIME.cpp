#include <iostream>
using namespace std;

class DateTime_5825
{
    private:
        int day_5825, month_5825, year_5825;
        int hour_5825, minute_5825, second_5825;
 
    public:
        DateTime_5825()
        {
            day_5825 = 0;
            month_5825 = 0;
            year_5825 = 0;
            hour_5825 = 0;
            minute_5825 = 0;
            second_5825 = 0;
        }
 
        DateTime_5825(int d, int m, int y, int h, int min, int sec)
        {
            day_5825 = d;
            month_5825 = m;
            year_5825 = y;
            hour_5825 = h;
            minute_5825 = min;
            second_5825 = sec;
        }
 
        DateTime_5825 operator+(DateTime_5825 const &obj)
        {
            DateTime_5825 res_5825;
            res_5825.day_5825 = day_5825 + obj.day_5825;
            res_5825.month_5825 = month_5825 + obj.month_5825;
            res_5825.year_5825 = year_5825 + obj.year_5825;
            res_5825.hour_5825 = hour_5825 + obj.hour_5825;
            res_5825.minute_5825 = minute_5825 + obj.minute_5825;
            res_5825.second_5825= second_5825 + obj.second_5825;
            return res_5825;
        }
 
        void advanceDay_5825(int d)
        {
            day_5825 += d;
        }
 
        void advanceHour_5825(int h)
        {
            hour_5825 += h;
        }
 
        void advanceMinute_5825(int min)
        {
            minute_5825 += min;
        }
 
        void advanceSecond_5825(int sec)
        {
            second_5825 += sec;
        }
 
        void reset_5825()
        {
            day_5825 = 0;
            month_5825 = 0;
            year_5825 = 0;
            hour_5825 = 0;
            minute_5825 = 0;
            second_5825 = 0;
        }
 
        void display_5825()
        {
            cout << day_5825 << ":" << month_5825 << ":" << year_5825 << ":" << hour_5825 << ":" << minute_5825<< ":" << second_5825;
        }
};
 
int main()
{
    int a,b,c,d,e,f,g,h;
    cout<<"Enter the date:";
    cin>>a;
    cout<<"Enter the month:";
    cin>>b;
    cout<<"Enter the year:";
    cin>>c;
    cout<<"Enter the hours:";
    cin>>d;
    cout<<"Enter the minutes:";
    cin>>e;
    cout<<"Enter the seconds:";
    cin>>f;
    DateTime_5825 d1(a, b, c, d, e, f);
    DateTime_5825 d2(a,b, c, d, e, f);
    d1.display_5825();
    cout << endl;
    d2.display_5825();
    cout << endl;
    DateTime_5825 d3 = d1 + d2;
    d3.display_5825();
    cout << endl;
    d3.advanceDay_5825(2);
    d3.advanceHour_5825(3);
    d3.advanceMinute_5825(30);
    d3.advanceSecond_5825(30);
    d3.display_5825();
    cout << endl;
    d3.reset_5825();
    d3.display_5825();
    return 0;
}
