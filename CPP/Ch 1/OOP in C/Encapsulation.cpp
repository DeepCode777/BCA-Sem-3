// #6 Example - (Data Encapsulation)

#include <iostream>
using namespace std;

class encap{
    int no;
    public :
    void num(int n){
        no = n; // (Encapsulation -> Private = Public)
        cout << no;
    }
};

int main() {
    encap e;
    e.num(20);
    return 0;
}