// #5 - WAP BCA OverLoading 

#include <iostream>
using namespace std;

class bca{
    int rollno;
    int age;
    char grade;
    
    public :
    bca(int rno, int ag, char gd){
        rollno = rno;
        age = ag;
        grade = gd;
    }
    void operato(){
        rollno++;
        age++;
        grade++;
    }
    void show(){
        cout << rollno << endl << age << endl << grade << endl;
    }
};

int main() {
    bca ob(20,30,'A');
    cout << "\nBefor Overloading \n";
    ob.show();
    
    cout << "\nAfter Overloadi \n";
    ob.operato();
    ob.show ();
    return 0;
}