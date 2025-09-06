#include <iostream>
using namespace std;

class Unary {
    int x;
public:
    Unary(int a) { x = a; }
    
    // Overload ++ (pre-increment)
    void operator++() {
        ++x;
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Unary u1(5);
    ++u1;      // calls operator++()
    u1.show(); // x = 6
}