#include <iostream>
#include <stdlib.h>
using namespace std;

class BCTE // BCTE named class is created
{
    int code;
    static int count; // Count is static type data of integer form

public:
    void setcode() // setcode function is defined
    {
        count++;
        code = count;
    }

    void showcode() // showcode function is defined
    {
        cout << "Student code \t " << code << "/BCTE/080." << endl;
    }

    static void showcount()
    {
        cout << "Records of " << count << "Student fund." << endl;
    }
};
int BCTE::count;

int main()
{
    BCTE c1, c2, c3; // C1 and C2 objects are created of class BCTE
    system("cls");
    c1.setcode(); // c1.called the function setcode.
    c2.setcode(); // c2.called the function setcode.
    c3.setcode();

    BCTE::showcount(); // static function showcount is called.


    c1.showcode(); // object c1 call showcode function.
    c2.showcode(); // object c2 call showcode function.
    c3.showcode(); // object c3 call showcode function.
}