//#8 Example - Default Controcter

#include <iostream>
using namespace std;

class defC{
    int no;
    char nm[20];
    double salary;
    public :
    defC (){
        cout << "\n Enter Roll Nu. : ";
        cin >> no;
        
        cout << "\n Ennter Naam : ";
        cin >> nm;
        
        cout << "\n Enter Salary : ";
        cin >> salary ;
        
        cout <<"\n\n Strudent Roll No. : " << no ;
        cout << "\n Student Name : " << nm;
        cout << "\n Student Salary : " << salary << endl ;
    }
};

int main() {
    defC s;
    return 0;
}