// #6 - Example Single Inheritance

#include <iostream>
using namespace std;

class person{
    public :
    int rn;
    int age;
    
    void getdata(){
        cout << "\n Enter Roll Number ";
        cin >> rn;
        cout << "\n Enter Age " ;
        cin >> age;
    }
};

class student : public person{
    public :
    
    void show(){
        cout << "\n Roll Number = " << rn;
        cout << "\n Age = " << age << endl;
    }
};

int main() {
    student s1;
    s1.getdata();
    s1.show();
    return 0;
}