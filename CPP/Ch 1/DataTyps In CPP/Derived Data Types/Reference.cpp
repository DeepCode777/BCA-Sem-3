// #19 Example Of References In CPP

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &b = a;
    
    cout << a << " " << b << endl ; // 10 10
    a++;
    cout << a << " " << b ; // 11 11
    return 0;
}