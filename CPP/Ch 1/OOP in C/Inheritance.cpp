// #7 Example Of (Inheritance)

#include <iostream>
using namespace std;

// Parent Class
class Dad {
    public:
    void money() {
        cout << "Dad gives pocket money " << endl;
    }
};

// Child Class (inherits Dad)
class Son : public Dad {
    public:
    void bike() {
        cout << "Son rides bike " << endl;
    }
};

int main() {
    Son s;
    s.money();  // Inherited Function from Dad
    s.bike();   // Son's own function 
    return 0;
}