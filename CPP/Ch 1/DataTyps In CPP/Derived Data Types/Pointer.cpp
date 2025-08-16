// #19 Example Of Pointer In CPP

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    
    cout << a << endl;  // 10
    cout << &a << endl;  // Adress of a
    cout << p <<endl ; // Address of a
    cout << *p << endl; // 10
    return 0;
}