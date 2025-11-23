#include <iostream>
using namespace std;

class A{
    private :
        int a;
    protected :
        int b;
    public :
    A(){
        cout << endl << "Enter A : ";
        cin >> a;
        cout << endl <<"Enter B : ";
        cin >> b;
    }
    friend class B;
};

class B{
    public :
    B(A d){
        cout << endl << "Sum Of A + B = " << d.a + d.b << endl;
    }
};

int main() {
    A d;
    B z(d);
    return 0;
}