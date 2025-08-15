#include <iostream>
using namespace std;

// #4 Example - 2(Class & Object)

class employee{
    int eid;
    char enm[20];
    float esal;
    
    public :
    void edata(){
        // Enter Details
        cout << "\n Enter Employee ID : " ;
        cin >> eid ;
        
        cout << "\n Enter Employee Nsme : " ;
        cin >> enm ;
        
        cout << "\n Enter Employee Salary : " ;
        cin >> esal;
        
        // Print Data 
        cout << endl << eid << endl << enm << endl << esal;
    }
};
int main() {
    employee e1;
    e1.edata();
    return 0;
}