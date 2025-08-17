// #46 Memory Management Opertor (New & Delete)

#include <iostream>
using namespace std;

int main() {
    int *p;

    // Memory allocate
    p = new int;      
    *p = 50;          // Value assign

    cout << "Value: " << *p << endl;

    // Memory free
    delete p;

    return 0;
}