#include<iostream>
using namespace std;
template<class t1,class t2>
class ABC{
    t1 a;
    t2 b;
    public: ABC(t1 x, t2 y){
        a=x; b=y;
    }
    void show();
};
template<class t1,class t2>
void ABC <t1,t2>::show(){
    cout<<"a and b="<<a<<b;
}
int main(){
    ABC<int,float>obj1(3,9.2);
    ABC<char,double>obj2('A',8.9007);
    cout<<"data of obj1 :";
    obj1.show();
    cout<<"\n data of object2:";
    obj2.show();
    return 0;
}