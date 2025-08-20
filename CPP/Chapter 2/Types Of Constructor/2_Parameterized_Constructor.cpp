// #9 Parameterized Constructor

#include <iostream>
using namespace std;

class paraC{
    int x,y;
    public :
    paraC(int x1, int y1){
        x = x1;
        y = y1;
        
        cout << "\n Value Of X = " << x;
        cout << "\n Value Of Y = " << y;
    }
};

int main() {
    paraC p(10,20);
    return 0;
}