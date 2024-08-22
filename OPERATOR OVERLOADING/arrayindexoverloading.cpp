#include<iostream>
using namespace std;

class array
{
    int a[10];
    public: array (int b[], int s)
    {
        for (int i=0; i<10; i++)
        {
            a[i] = b[i];
        }
    }
    int & operator [] (int index)
    {
        if (index <0 || index> 10)
        {
            cout<<"Data does not exist";
            exit(1);
        }
        return a[index];
    }
};

int main()
{
    int b[] = {1, 2, 3, 4 , 5, 6, 7, 8, 9};
    array A(b, 10);
    cout<<"The third element = "<<A[2]<<endl; // Array is in the right side it returns value
    A[2] = 200; // Array is in left side so it returns address
    cout<<endl<<"The third element is = "<<A[2];
    return 0;
}