#include <iostream>
#include <string.h>
using namespace std;
class students_5825
{
public:
string name_5825;
int roll_5825;
float marks_5825;
// friend void sort_5825(students_5825 stud[]);
void getData_5825(void)
{
cout << "Enter name : ";
cin >> name_5825;
cout << "Enter roll : ";
cin >> roll_5825;
cout << "Enter marks : ";
cin >> marks_5825;
}
void showData_5825(void)
{
cout << "name : " << name_5825 << endl;
cout << "roll : " << roll_5825 << endl;
cout << "marks : " << marks_5825 << endl;
}
void sort_5825(students_5825 stud_5825[])
{
students_5825 temp_5825;
for (int i_5825 = 0; i_5825 < 4; i_5825++)
{
for (int j_5825 = i_5825 + 1; j_5825 < 4; j_5825++)
{
if (stud_5825[i_5825].marks_5825 < stud_5825[j_5825].marks_5825)
{
temp_5825 = stud_5825[i_5825];
stud_5825[i_5825] = stud_5825[j_5825];
stud_5825[j_5825] = temp_5825;
}
}
}
}
};
int main()
{
students_5825 stud_5825[4];
cout << "\n*****Enter Details of 4 students *****\n"
<< endl;
for (int i_5825 = 0; i_5825 < 4; i_5825++)
{
cout << "\nStudent " << (i_5825 + 1) << endl;
stud_5825[i_5825].getData_5825();
} for (
int i_5825 =
0; i_5825 <
4; i_5825++)
{
stud_5825[i_5825].sort_5825(stud_5825);
}
cout << "\n\nAfter sorting the marks in Decending order, Displaying The Student Details";
cout << "\n------------------------------------------" << endl;
for (int i_5825 = 0; i_5825 < 4; i_5825++){
stud_5825[i_5825].showData_5825();
cout << "\n";
}
cout << "------------------------------------------" << endl;
return 0;
}
