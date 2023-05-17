#include <iostream>
#include <string>
using namespace std;
class student_5811
{
private:
string name_5811;
int rollno_5811;
float marks_5811[5];
public:
void getData_5811()
{
cout << "Enter student's name : ";
cin >> name_5811;
cout << "Enter Roll No. : ";
cin >> rollno_5811;
cout << "Enter marks in 5 Subjects : ";
for (int i_5811 = 0; i_5811 < 5; i_5811++)
{
cin >> marks_5811[i_5811];
}
} float calculateTotalmarks_5811()
{
float totalmarks_5811 = 0.0;
for (int i_5811 = 0; i_5811 < 5; i_5811++)
{
totalmarks_5811 += marks_5811[i_5811];
} return totalmarks_5811;
}
void displayGrade_5811()
{
float avg_5811 = (calculateTotalmarks_5811()) / 5;
if (avg_5811 >= 90 && avg_5811 <= 100)
{
cout << "Grade O (Outstanding)\n";
}
else if (avg_5811 >= 80 && avg_5811 < 90)
{
cout << "Grade E (Excellent)\n";
}
else if (avg_5811 >= 70 && avg_5811 < 80)
{
cout << "Grade A\n";
}
else if (avg_5811 >= 60 && avg_5811 < 70)
{
cout << "Grade B\n";
}
else if (avg_5811 >= 50 && avg_5811 < 60)
{
cout << "Grade C\n";
}
else if (avg_5811 >= 40 && avg_5811 < 50)
{
cout << "Grade D\n";
}
else
{
cout << "Grade F (Fail)\n";
}
}
void display_5811()
{}
};
int main()
{
student_5811 st_5811;
st_5811.getData_5811();
cout<<"\nTotal marks = "<<st_5811.calculateTotalmarks_5811()<<endl;
st_5811.displayGrade_5811();
return 0;
} 
