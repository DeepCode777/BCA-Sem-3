#include <iostream>
using namespace std;

class student{
    public :
    int rno;
    char nm[20];
    
    student(){
        cout << "\n Enter Rno. : ";
        cin >> rno;
        cout << "\n Enter Name : ";
        cin >> nm;
    }
};

class test : virtual public student {
    public :
    int t1,t2;
    
    test(){
        cout << "\n Enter Mark of Test 1 : ";
        cin >> t1;
        cout << "\n Enter Mark of Test 2 : ";
        cin >> t2; 
    }
};

class score : virtual public student {
    public :
    int sco;
    
    score(){
        cout << "\n Enter Score : ";
        cin >> sco;
    }
};

class total : public test, public score {
    public :
    int tot;
    total(){
        tot = 0;
        tot = t1 + t2 + sco;
        cout << endl << "______________________" << endl;
        cout << endl << "Roll No = " << rno << endl;
        cout << "Name = " << nm << endl;
        cout << endl << "Mark Of Test 1 = " << t1 << endl << "Mark Of Test 2 = "<< t2 << endl;
        cout << endl << "Score Is = " << sco << endl;
        cout << endl << "Total Is = " << tot << endl;
    }
};

int main() {
    total t1;
    return 0;
}