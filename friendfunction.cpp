#include<iostream>
using namespace std;

class Ff{
    private:
        int a,b;
    public:
        void setData(int x,int y){
            a= x;
            b= y;
        }
        friend void add(Ff f);
};
void add(Ff f){

    cout<<"Sum : "<<f.a+f.b;
}
int main(){
    Ff obj;
    obj.setData(5,6);
    add(obj);
    return 0;
}