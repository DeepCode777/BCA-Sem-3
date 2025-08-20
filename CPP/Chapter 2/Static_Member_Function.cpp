// #16 Example - Static Member Function

#include <iostream>
using namespace std;

class box{
    static int le;
    static int br;
    static int he;
    
    public :
    static void print(){
        cout << "\n Lenght = " << le;
        cout << "\n Breaght = " << br;
        cout << "\n height = " << he;
    }
};

int box :: le = 10;
int box :: br = 20;
int box :: he = 30;

int main() {
    box d;
    cout << "\n Called Through Object Name " ;
    d.print();
    cout << endl << "\n Called Through Class Name " ;
    box :: print();
    return 0;
}