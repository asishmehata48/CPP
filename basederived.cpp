#include<iostream>
using namespace std;

class Base {
    public:
    Base() { cout << "Base"; }
};
class Derived : public Base {
    public:
    Derived() { cout << "Derived"; }
};
int main() {
    Derived obj;
    return 0;
}