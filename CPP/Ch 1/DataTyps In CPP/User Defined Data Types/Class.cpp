// Example Of Class In CPP

#include <iostream>
using namespace std;

class student{  // create student class
    int rollno;
    char snm[10];

    public :
    void get(){
        cout << "Enter Roll No : \n";
        cin >> rollno ;

        cout << "Enter Name : \n";
        cin >> snm;

        cout << rollno << endl << snm << endl;
    }
};

int main() {
    student s1; // s1 - is Object Of Students class
    s1.get();
    return 0;
}