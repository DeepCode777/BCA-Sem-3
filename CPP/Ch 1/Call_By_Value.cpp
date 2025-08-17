// #42 Example - Call By Value - Without cin

#include <iostream>
using namespace std;

void swap(int a, int b){
    int tmp;
    
    // Swap Values
    tmp = a;
    a = b;
    b = tmp;
    
    cout << "Value Of A " << a << endl;
    cout << "Value Of B " << b << endl;
}

int main() {
    swap(100,200);
    return 0;
}