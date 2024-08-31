#include<iostream>
using namespace std;
class part
{
    private: int modelnumber;
    int partnumber;
    float cost;

    public: void setpart(int mn, int pn, float c)
    {
        modelnumber = mn;
        partnumber = pn;
        cost = c;
    }
    void showpart()
    {
        cout<<"Model "<<modelnumber<<endl;
        cout<<"Part "<<partnumber<<endl;
        cout<<"Cost "<<cost;
    }
};

int main()
{
    part part1;
    part1.setpart(6244, 373, 217.69F);
    part1.showpart();
    return 0;
}