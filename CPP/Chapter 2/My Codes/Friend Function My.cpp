#include <iostream>
using namespace std;

class abc{
    int a,b;
    public :
    abc(){
        cout << "\n Enter A : ";
        cin >> a;
        cout << "\n Enter B : ";
        cin >> b;
    }
    friend void ad(abc l);
};

void ad(abc l){
    cout << "\n Sum Of A + B = " << l.a + l.b << endl;
}

int main() {
    abc l;
    ad(l);
    return 0;
}