// Public Access Specifier (with cin & cout)

#include <iostream>
using namespace std;

class base {
public:
    int pub; // Public Variable
};

int main() {
    base c;
    cout << " Enter Public Value: " << endl;
    cin >> c.pub;
    cout << "\n Public Variable = " << c.pub << endl;

    return 0;
}