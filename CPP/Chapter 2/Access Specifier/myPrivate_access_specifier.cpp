//Private Access Specifier (with cin & cout)

#include <iostream>
using namespace std;

class base {
private:
    int pri; // Private Variable

public:
    void set() {
        cout << "Enter Private Value: " << endl;
        cin >> pri;
    }

    void show() {
        cout << "Private Variable = " << pri << endl;
    }
};

int main() {
    base c;
    c.set();
    c.show();
    return 0;
}