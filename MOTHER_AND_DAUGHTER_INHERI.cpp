#include<iostream>
using namespace std;

class mother {
    private:
    int x;
public:
    void display_m(){
        cout<<"Display function from | Mother class is called...."<<endl;
        
    }
};

class daughter:public mother{
    private:
    int a;
public:
    void display_d()
    {
        display_m();
        cout<<"Display function from | Daughter class is called...."<<endl;
        
    }
};

int main(){
    daughter d;
    d.display_d();
    return 0;
    
}
