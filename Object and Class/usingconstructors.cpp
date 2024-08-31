 #include<iostream>
 using namespace std;
 class point
 {
    int x,y;
    public:
    point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
 };
 int main()
 {
 point p1(20,15);
 cout<<"p1.x="<<p1.getx()<<",p1.y="<<p1.gety();
 return 0;
 }