
#include<iostream>
using namespace std;

class n1_5825{
public:
int val1_5825;
void setvalue_5825(int a_5825){
val1_5825 = a_5825;
}
void display_5825(void){
cout<<val1_5825<<endl;
}
};
class n2_5825{
public:
int val2_5825;
void setvalue_5825(int b_5825){
val2_5825 = b_5825;
}
void display_5825(void){
cout<<val2_5825<<endl;
}
};
void swap(n1_5825 &X,n2_5825 &Y){
int temp = X.val1_5825;
X.val1_5825 = Y.val2_5825;
Y.val2_5825 = temp;
}
int main(){
n1_5825 num1;
n2_5825 num2;
int i_5825,j_5825;
cout<<"Enter the first number :";
cin>>i_5825;
cout<<"Enter the second number :";
cin>>j_5825;
num1.setvalue_5825(i_5825);
num2.setvalue_5825(j_5825);
cout<<"The values of both number before swap is :"<<endl;
num1.display_5825();
num2.display_5825();
swap(num1,num2);
cout<<"The values of both number after swap is :"<<endl;
num1.display_5825();
num2.display_5825();

return 0;
}
