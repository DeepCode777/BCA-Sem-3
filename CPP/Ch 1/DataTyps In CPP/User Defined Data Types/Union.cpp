// #23 Example Of Union in Cpp (My + Chatgpt Guide)

#include <iostream>
using namespace std;

union emp {
    char enm[30];
    int eid;
    double salary;
};

int main() {
    union emp e = {"Deep"};   // Initialize with name

    // Display Name
    cout << "Name: " << e.enm << endl;

    // Assign ID (overwrites name)
    e.eid = 101;
    cout << "ID: " << e.eid << endl;

    // Assign Salary (overwrites ID)
    e.salary = 30000;
    cout << "Salary: " << e.salary << endl;

    
    cout << "\nSize of Union: " << sizeof(emp) << endl;

    return 0;
}