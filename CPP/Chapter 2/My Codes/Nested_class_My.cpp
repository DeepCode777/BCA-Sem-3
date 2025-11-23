#include <iostream>
using namespace std;

class A{
    public :
    class B{ // nested class
        int nm;
        public :
        B(int n){
            nm = n ;
            cout << "Number Is = " << nm ;
        }
    };
};

int main() {
    cout << "Nested Classes \n";
    A :: B obj(9);
    return 0;
}