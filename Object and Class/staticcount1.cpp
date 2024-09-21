#include<iostream>
using namespace std;
class static_item
{
private:
    static int count;
    float price;
public:
   void get_data(float a){
    price=a;
    count++; //Count value is increased when getdata is called and value is same for all objects.
   }
    static void show_count(){
        cout<<"count="<<count<<endl;
    }
};
int static_item::count;

int main(){
    static_item d1, d2, d3;
    d1.show_count();
    d2.show_count();
    d3.show_count();
    d1.get_data(50.5);
    d2.get_data(80.5);
    d3.get_data(12.3);
    cout<<"after reading data : "<<endl;
    d1.show_count();
    d2.show_count();
    d3.show_count();
    return 0;
}