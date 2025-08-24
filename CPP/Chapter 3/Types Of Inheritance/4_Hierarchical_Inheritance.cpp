// #9 Example - 4 Hierarchical Inheritancen - One base class → multiple derived classes.

#include <iostream>
using namespace std;

class var{
    public :
    int x,y;
    var(){
        cout << "\n Enter Your First Number : ";
        cin >> x;
        cout << "\n Enter Your Second Number : ";
        cin >> y;
    }
};
class add : public var{
    public :
    add(){
        cout << "\n Aadition = "  << x + y << endl ;
    }
};

class sub : public var{
    public :
    sub(){
        cout << "\n Subtraction = " << x - y << endl ;
    }
};

int main() {
    add a1;
    sub s1;
    return 0;
}