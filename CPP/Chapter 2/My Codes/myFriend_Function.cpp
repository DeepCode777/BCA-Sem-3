#include <iostream>
using namespace std;

class abc{
    int a,b;
    public :
    void data(){
        cout << "\n Enter A : ";
        cin >> a;
        cout << "\n Enter B : ";
        cin >> b;
    }
    friend void add(abc l);
};

void add(abc l){
    cout << "\n Sum Of A + B = " << l.a + l.b << endl;
}

int main() {
    abc d;
    d.data();
    add(d);
    return 0;
}