// #6 Example - Constructor

#include <iostream>
using namespace std;

class student{
    int rno;
    char nm[10];
    
    public : // Required For Constructor
    student(){ // Constructor Create
        cout << "\n Enter Roll No : ";
        cin >> rno;
        
        cout << "\n Enter Name : ";
        cin >> nm;
        
        cout << endl << "\n Roll Number Is = " << rno;
        cout << "\n Name Is = " << nm << endl ;
    }
};

int main() {
    student D;
    return 0;
}