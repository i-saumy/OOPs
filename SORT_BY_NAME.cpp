#include <iostream>
#include <string>
using namespace std;
struct faculty_5811
{
int ID_5811;
string name_5811;
string post_5811;
string qualification_5811;
string address_5811;
int salary_5811;
};
int main()
{
int n_5811;
cout << "\nEnter the Number of faculty Members : ";
cin >> n_5811;
faculty_5811 fac_5811[n_5811];
for (int i_5811 = 0; i_5811 < n_5811; i_5811++)
{
cout << "Enter details of faculty member " << i_5811 + 1 << ": " << endl;
cout << "ID: ";
cin >> fac_5811[i_5811].ID_5811;
cout << "Name: ";
cin >> fac_5811[i_5811].name_5811;
cout << "Post: ";
cin >> fac_5811[i_5811].post_5811;
cout << "Qualification: ";
cin >> fac_5811[i_5811].qualification_5811;
cout << "Address: ";
cin >> fac_5811[i_5811].address_5811;
cout << "Salary: ";
cin >> fac_5811[i_5811].salary_5811;
}
faculty_5811 temp_5811;
for (int i_5811 = 0; i_5811 < n_5811 - 1; i_5811++)
{
for (int j_5811 = 0; j_5811 < n_5811 - i_5811 - 1; j_5811++)
{
if (fac_5811[j_5811].name_5811 > fac_5811[j_5811 + 1].name_5811)
{
temp_5811 = fac_5811[j_5811];
fac_5811[j_5811] = fac_5811[j_5811 + 1];
fac_5811[j_5811 + 1] = temp_5811;
}
}
}
cout << "\n\t\tThe details of the faculty members sorted by name are: " << endl;
for (int i_5811 = 0; i_5811 < n_5811; i_5811++)
{
cout << "\n***Faculty member " << i_5811 + 1 << ": "
<< "***" << endl;
cout << "ID : " << fac_5811[i_5811].ID_5811 << endl;
cout << "Name : " << fac_5811[i_5811].name_5811 << endl;
cout << "Post : " << fac_5811[i_5811].post_5811 << endl;
cout << "Qualification: " << fac_5811[i_5811].qualification_5811 << endl;
cout << "Address : " << fac_5811[i_5811].address_5811 << endl;
cout << "Salary : " << fac_5811[i_5811].salary_5811 << endl;
}
return 0;
}
