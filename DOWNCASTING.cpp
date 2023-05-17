
#include <iostream> 
using namespace std; 
class Parent { 
    
    public: 
void base() { 
    cout << " It is the function of the Parent class "<< endl; 
    } 
}; 
class Child : public Parent 
{
     public: void derive() { cout << " it is the function of the Child class " <<endl; 
     } 
}; 
int main () { 
    Parent pobj;
    Child *cobj;
cobj = (Child *) &pobj; 
 cobj -> derive(); 
return 0;
 }