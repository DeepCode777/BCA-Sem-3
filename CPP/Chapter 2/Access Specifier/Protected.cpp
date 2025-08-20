// #5 - Protected example

#include <iostream>
using namespace std;

class emp{
    protected :
        int did;
        char dnm[10];
    public :
        int eid;
        char enm[10];
        double salary;
        
    void getdata(){
        cout << "\n Enter ID : ";
        cin >> eid;
        
        cout << "\n Enter Name : ";
        cin >> enm;
        
        cout << "\n Enter salary : " << endl;
        cin >> salary;
    }
    void show(){
        cout << "\n ID = " << eid;
        cout << "\n Name = " << enm;
        cout << "\n Salary = " << salary << endl;
    }
};

class department : public emp {
    public :
        void get(){
            cout << "\n Enter Deparment ID : ";
            cin >> did;
            cout << "\n Enter Deparment Name : " << endl;
            cin >> dnm;
            
            cout << "\n Deparment ID = " << did;
            cout << "\n Deparment Name : " << dnm << endl;
        }
};

int main() {
    department d;
    d.getdata();
    d.show();
    d.get();
    return 0;
}