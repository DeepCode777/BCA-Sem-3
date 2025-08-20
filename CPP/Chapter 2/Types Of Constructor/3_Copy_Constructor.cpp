// #10 Example - Copy Constructor

#include <iostream>
using namespace std;

class A{
    public :
    int x;
    A(int a){ // Constructor (a = 10)
        x = a; // Private = Public
    }
    A(A & i){ // Copy A Constructor
        x = i.x;
    }
};

int main() {
    A a1(10); // a1 is Object
    A a2(a1); // a1 copy in a2
    
    cout << a2.x; // Output - 10
    return 0;
}