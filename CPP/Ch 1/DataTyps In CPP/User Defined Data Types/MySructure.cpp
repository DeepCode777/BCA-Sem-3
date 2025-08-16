// My Example Of Structer in Cpp (With cin & cout)

#include <iostream>
#include <string>
using namespace std;

struct emp {
    string enm;
    int eid;
    double salary;
};

int main() {
    struct emp e;

    // Input data from user
    cout << "Enter Employee Name: ";
    cin >> e.enm;

    cout << "Enter Employee ID: ";
    cin >> e.eid;

    cout << "Enter Employee Salary: ";
    cin >> e.salary;

    // Print Data
    cout << "\n--- Employee Details ---" << endl;
    cout << "Name: " << e.enm << endl;
    cout << "ID: " << e.eid << endl;
    cout << "Salary: " << e.salary << endl;

    cout << "\n--- Size Of Each Data Member ---" << endl;
    cout << "Size of Name: " << sizeof(e.enm) << endl;
    cout << "Size of ID: " << sizeof(e.eid) << endl;
    cout << "Size of Salary: " << sizeof(e.salary) << endl;

    cout << "Size of Whole Structure: " << sizeof(emp) << endl;

    return 0;
}