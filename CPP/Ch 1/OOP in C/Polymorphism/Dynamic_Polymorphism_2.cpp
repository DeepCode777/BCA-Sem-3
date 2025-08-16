// #10 Example - (Dynamic Pol_2)Method OverRidding 2)

#include <iostream>
using namespace std;

class animal{
    public :
    void eat(){
        cout << " \n Food " << endl;
    }
};

class dog : public animal{
    public :
    void eat(){
        cout << "Home Food " << endl ;
    }
};

int main() {
    dog d;
    d.eat(); // Output - Home Food -> Method OverRide
    animal d1;
    d1.eat(); // Food
    return 0;
}