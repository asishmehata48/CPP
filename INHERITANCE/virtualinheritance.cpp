#include <iostream>
using namespace std;

class Person {
public:
    void talk() {
        cout << "Person is talking" << endl;
    }
};

// Both Student and Teacher inherit Person
class Student : virtual public Person {
public:
    void study() {
        cout << "Student is studying" << endl;
    }
};

class Teacher : virtual public Person {
public:
    void teach() {
        cout << "Teacher is teaching" << endl;
    }
};

// Graduate inherits both Student and Teacher
class Graduate : public Student, public Teacher {
public:
    void research() {
        cout << "Graduate is researching" << endl;
    }
};

int main() {
    Graduate grad;
    grad.talk();      // Unambiguous due to virtual inheritance
    grad.study();
    grad.teach();
    grad.research();
    
    return 0;
}
