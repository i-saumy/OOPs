#include<iostream>
using namespace std;
class ele_5825
{
static int a_5825;
static int b_5825;
static int c_5825;
static int d_5825;
static int e_5825;
static int f_5825;
public:
void cast_vote(int x_5825)//function for getting votes then adding to the particular contestant;
{
if(x_5825==1)
a_5825++;
if(x_5825==2)
b_5825++;
if(x_5825==3)
c_5825++;
if(x_5825==4)
d_5825++;
if(x_5825==5)
e_5825++;
if(x_5825<=0||x_5825>5)
f_5825++;
}
void winner_5825()//function to determine the winner after casting the vote
{
if(a_5825>b_5825&&a_5825>c_5825&&a_5825>d_5825&&a_5825>e_5825)
cout<<"WINNNER: A with "<<a_5825<<" VOTES ";
if(b_5825>a_5825&&b_5825>c_5825&&b_5825>d_5825&&b_5825>e_5825)
cout<<"WINNNER: B with "<<b_5825<<"VOTES ";
if(c_5825>b_5825&&c_5825>a_5825&&c_5825>d_5825&&c_5825>e_5825)
cout<<"WINNNER: C with "<<c_5825<<"VOTES ";
if(d_5825>b_5825&&d_5825>c_5825&&d_5825>a_5825&&d_5825>e_5825)
cout<<"WINNNER: D with "<<d_5825<<"VOTES ";
if(e_5825>b_5825&&e_5825>c_5825&&e_5825>d_5825&&e_5825>a_5825)
cout<<"WINNNER: E with "<<e_5825<<"VOTES ";
cout<<"\nSpoilt ballot: "<<f_5825;
}
};
int ele_5825::a_5825;
int ele_5825::b_5825;
int ele_5825::c_5825;
int ele_5825::d_5825;
int ele_5825::e_5825;
int ele_5825::f_5825;

int main()
{
ele_5825 A_5825;
int n_5825,i_5825,temp_5825;
cout<<"Enter number of voters: ";
cin>>n_5825;
for(i_5825=0;i_5825<n_5825;i_5825++)
{ //asking for vote of n number of voter;
cout<<"\nVOTER "<<i_5825+1<<"\n";
cout<<"Enter voter (1/2/3/4/5): ";
cin>>temp_5825;
A_5825.cast_vote(temp_5825);
}
A_5825.winner_5825(); //DETERMINING THE WINNER;
}