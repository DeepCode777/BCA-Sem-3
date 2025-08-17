// #40 Example - Default Arguments

#include <iostream>
using namespace std;

class defArgu{
    int x,y;
    public :
    void get(int x1,int y1 = 20){ // 20 is argument, Its Default
        x = x1;
        y = y1;
    }
    void show(){
        cout << "\n X Is = " << x <<"\n" ;
        cout << "\n Y Is = " << y <<"\n" ;
    }
};

int main() {
    defArgu s;
    s.get(10); // 10 20
    s.show ();
    
    s.get(10,50); // 10 50
    s.show();
    return 0;
}