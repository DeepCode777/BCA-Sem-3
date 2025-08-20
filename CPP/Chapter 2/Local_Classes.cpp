// #1 Example - Local Classes

#include <iostream>
using namespace std;

int fun(){
    class test{ // class in function
        int a,b;
        public :
        void show(){
            cout << "Enter A : \n" ;
            cin >> a ;
            cout << "Enter B : \n";
            cin >> b;
            
            cout << a << endl << b << endl ;
        }
    };
    test t; // class object
    t.show(); // function Class Function
    
    return 0;
}
int main() {
    fun();
    return 0;
}