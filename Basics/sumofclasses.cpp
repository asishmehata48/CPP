#include<iostream>
using namespace std;
class mango;
class apple
{
private:
   int x;
    public:
    void getdata1(){
     
        cin>>x;
    }
    friend void add(apple,mango);
};

class mango
{
private:
   int y;
public:
   
void getdata2(){
   
    cin>>y;
}
friend void add(apple,mango);
};
void add(apple a1,mango m1){
    int sum=a1.x+m1.y;
    cout<<"the sum is="<<sum;
}
int main(){
    apple a1;
    mango m1;
     cout << "Enter value for apple: ";
    a1.getdata1();
     cout << "Enter value for mango: ";
    m1.getdata2();

   
    add(a1,m1);
    return 0;
}
