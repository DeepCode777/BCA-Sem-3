// #21-22 Example Of Structer in Cpp

#include <iostream>
#include <string.h>
using namespace std;

struct emp{
   string enm;
   int eid;
   double salary;
};

int main() {
    struct emp e;
    
    e.enm = "user" ;
    e.eid = 1; 
    e.salary = 30000;
    
    // Print Data
    cout << e.enm << endl << e.eid << endl << e.salary << endl;
    
    // Size Of Every Single Data
    cout << sizeof(e.enm) << endl;
    cout << sizeof(e.eid) << endl;
    cout << sizeof(e.salary) << endl;
    
    // Size Of Whole Structure
    cout << sizeof(emp) << endl;
    return 0;
}