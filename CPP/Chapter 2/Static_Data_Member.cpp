// #15 Example WAP On Static Data Member

#include <iostream>
using namespace std;

class A{
    public :
    static int x;
    A(){
        cout << "\n A Call " ;
    }
};

int A :: x=2; // Value Of X

int main() {
    A a1;
    cout << "\n Accessing Static " << A :: x;
    return 0;
}