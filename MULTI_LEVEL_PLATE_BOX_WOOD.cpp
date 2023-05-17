#include <iostream>
using namespace std;

class plate{
    public:
    plate(int length, int width){
        cout<<"This is plate constructor having length "<<length<<", width"<<width<<endl;
        }
};
class box: public plate{
    public:
    box(int length, int width, int height): plate(length,width){
        cout<<"This is box constructor having length "<<length<<", width"<<width<<", height"<<height<<endl;
        }
};
class woodbox: public box{
    public:
    woodbox(int length, int width, int height, int thick): box(length,width,height){
        cout<<"This is woodbox constructor having length "<<length<<", width "<<width<<", height "<<height<<", thickness"<<thick<<endl;
    }
};
int main(){
    int l=10,w=20,h=30,t=40;
    woodbox wb(l,w,h,t);
    return 0;
}
