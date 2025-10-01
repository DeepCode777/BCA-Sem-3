#include <iostream>
using namespace std;

class container{
    public :
    void show(){
        cout << "hello" << endl;
    }
};
class con2{
    public :
    container o1;
    void display(){
        cout << " \n Co2" << endl ;
    }
};

int main() {
    con2 o2;
    o2.display ();
    o2.o1.show ();
    return 0;
}