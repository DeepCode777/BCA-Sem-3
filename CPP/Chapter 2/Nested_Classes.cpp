// #2 Example - Nested Classes

#include <iostream>
using namespace std;

class A{
    public :
    class B{ // nested class
        int nm;
        public :
        void get(int n){
            nm = n ;
            
            cout << "Number Is = " << nm ;
        }
    };
};

int main() {
    cout << "Nested Classes \n";
    A :: B obj; 
    obj.get(10) ;
    return 0;
}