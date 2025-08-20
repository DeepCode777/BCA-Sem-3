// #14 Example 2 - Constructor Overloading 

#include <iostream>
#include <string>
using namespace std;

class emp {
public:
    int id;
    string name;
    double salary;

    emp() {
        cout << "Enter Id : ";
        cin >> id;
        cout << "\n Enter Name : ";
        cin >> name;
        cout << "\n Enter Salary : ";
        cin >> salary;
        
        cout << endl << " \n Student Data " ;
        cout << "\n ID = " << id;
        cout << "\n Name = " << name;
        cout << "\n Salary = " << salary;
    }

    emp(float a, string b, float c) {
        cout << endl << " \n Student Data " ;
        cout << "\n ID = " << a;
        cout << "\n Name = " << b;
        cout << "\n Salary = " << c;
    }
};

int main() {
    emp e;
    emp e2(10.00, "Deep", 50000.00);
    return 0;
}
