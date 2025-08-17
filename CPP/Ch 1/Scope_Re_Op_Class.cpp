// #28 Example - Scope Resolution Operator With Class (::)

#include <iostream>
using namespace std;

class base{
    public :
    void show(){
        cout << "I Am Base Class "  << endl ;
    }
};

class derived : public base{
    public :
    void show (){
        cout << "I Am Derived Class " << endl ;
    }
};

class three : public derived {
    public :
    void show(){
        cout << "I Am Therd Class " << endl;
    }
};

int main() {
    three d;
    d.show (); // Access class three
    d.base :: show (); // Access class base
    d.derived :: show (); // Access class derived
    return 0;
}