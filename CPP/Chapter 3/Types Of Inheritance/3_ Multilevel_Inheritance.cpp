// #8 Example - 3. Multilevel Inheritance - Derived class acts as base for another derived class (chain).

#include <iostream>
using namespace std;

class A{ // A - Base
    public :
    int age;
    A(){
        cout << " Enter Age : ";
        cin >> age;
    }
};
class B : public A{ // B - Dirived, A - Base
    public :
    char name[20];
    B(){
        cout << "\n Enter Name : ";
        cin >> name;
    }
};
class C : public B{ // C - Derived, B - Base
    public :
    C(){
        cout << "\n Age = " << age << endl;
        cout << " Name = " << name << endl;
    }
};

int main() {
    C c1;
    return 0;
}