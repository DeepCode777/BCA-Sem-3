#include <iostream>
using namespace std;

class A {
public:
    virtual void print() = 0;   // Pure virtual function
    void show() {               // Normal function
        cout << "Base Class " << endl;
    }
};

class B : public A {
public:
    void print() override {     // Must override pure virtual function
        cout << "Print Derived Class " << endl;
    }
    void show() {               // Redefined normal function
        cout << "Derived Class " << endl;
    }
};

int main() {
    A *bptr;   // Base class pointer
    B obj;     // Derived object
    bptr = &obj;

    bptr->print(); // Calls Derived class (mandatory override)
    bptr->show();  // Calls Base class (non-virtual, so Base version executes)

    return 0;
}