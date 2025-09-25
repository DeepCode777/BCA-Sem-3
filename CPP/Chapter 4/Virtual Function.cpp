#include <iostream>
using namespace std;

class A {
public:
    virtual void print() {   // Virtual function
        cout << "Print Base Class " << endl;
    }
    void show() {
        cout << "Base Class " << endl;
    }
};

class B : public A {
public:
    void print() {
        cout << "Print Derived Class " << endl;
    }
    void show() {
        cout << "Derived Class " << endl;
    }
};

int main() {
    A *bptr;   // Base class pointer
    B obj;     // Derived object
    bptr = &obj;

    bptr->print();  // Calls virtual → Derived class
    bptr->show(); // Calls Base class (non-virtual)

    return 0;
}