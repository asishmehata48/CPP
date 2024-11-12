// parameterized constructor in multiple inheritance

#include<iostream>
using namespace std;

class alpha
{
    protected: int x;
    public: alpha(int a){
        x= a;
        cout<<"Alpha constructed :";
    }
};
class beta
{
    protected: float p, q;
    public: beta(float a, float b){
        p = a;
        q = b;
        cout<<"\n Beta constructed: ";
    }
};

class gamma: public alpha, public beta{
    int u, v;
    public: gamma(int a, int b, float c): alpha(a), beta(c,c){
        u=a;
        v=b;
        cout<<"\n gamma constructed: ";
    }
    void show()
    {
        cout<<x<<p<<q<<u<<v;
    }
};

int main()
{

    gamma g(1, 2, 2.2);
    g.show();
    return 0;
}