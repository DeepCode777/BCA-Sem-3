// #27 Example - Scope Resolution Operator (::)

#include <iostream>
using namespace std;

int d=12; // Global Variable

int main() {
    int d=13; // Local Variable
    
    cout << "Local Variable Is :" << d << endl ; // 13
    cout << "Globle Variable Is :" << :: d << endl;  //12 - Access Global Variable
    return 0;
}