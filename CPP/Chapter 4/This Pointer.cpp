include <iostream>
using namespace std;

class t{
    int x;
    public :
    t(int x){
        this -> x = x;
        cout << endl << "x = " << x << endl ;
    }
};

int main() {
    t obj(20);
    return 0;
}