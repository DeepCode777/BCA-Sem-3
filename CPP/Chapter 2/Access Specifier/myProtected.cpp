// Protected Access Specifier (with cin & cout)

#include <iostream>
using namespace std;

class base {
protected:
    int pro; // Protected Variable
};

class derive : public base {
public:
    void set() {
        cout << "Enter Protected Value: ";
        cin >> pro;
    }
    void show() {
        cout << "Protected Variable = " << pro << endl;
    }
};

int main() {
    derive c;
    c.set();
    c.show();
    return 0;
}