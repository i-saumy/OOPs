#include<iostream>
using namespace std;

struct time_struct

        {
         int hour;
         int minute;
         int second;
        }
        t;
        
         
 struct date
{
int day;
int month;
int year;
}d1,d2;

int main() 
{
    struct date d1,d2;

 cout<<"\n Enter Hour : ";
 cin>>t.hour;
 
 cout<<"\n Enter Minute: ";
 cin>>t.minute;
 
 cout<<"\n Enter Second : ";
 cin>>t.second;

 cout<<"\n Time :"<<t.hour%24<<":"<<t.minute%60<<":"<<t.second%60<<endl;
 
 cout<<" \n Enter first date(dd/mm/yyyy):";
 cin>>d1.day>>d1.month>>d1.year;

cout<<" \n Enter second date(dd/mm/yyyy):";
cin>>d2.day>>d2.month>>d2.year;

 if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
cout<< "\n EQUAL";
else
cout<<"\n UNEQUAL";
}

