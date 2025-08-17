// Example - Call By Reference - without cin 

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp;
    
    // Swap Values 
    tmp = a;
    a = b;
    b = tmp;
    
    cout << "First Value : " << a << endl;
    cout << "Second Value : " << b << endl;
}

int main() {
    int x = 100, y = 200;
    
    cout << "\nAfter Swap \n" ;
    swap(x,y); // X = 200, Y = 100
    return 0;
}