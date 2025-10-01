#include <iostream>
using namespace std;
template<class T>

class show{
    T a,b;
    public :
    show(T p, T q){
        a = p;
        b = q;
        
        cout << "A = " << a << endl ;
        cout << "B = " << b << endl ;
    }
};

int main() {
    show <int> ob(10,20);
    return 0;
}