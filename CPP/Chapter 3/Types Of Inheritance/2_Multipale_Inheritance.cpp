// #7 Example - 2. Multiple Inheritance - One derived class inherits from multiple base classes.

#include <iostream>
using namespace std;

class BA{
    public :
    int age;
    void fun(){
        cout << " Enter Age : ";
        cin >> age;
    }
};
class BB{
    public :
    char name[20];
    void fun1(){
        cout << "\n Enter Name : ";
        cin >> name;
    }
};
class DC : public BA, public BB{ // One Derived - Multiple Base
    public :
    void show(){
        cout << "\n Age = " << age << endl;
        cout << " Name = " << name << endl;
    }
};

int main() {
    DC c1;
    c1.fun();
    c1.fun1();
    c1.show();
    return 0;
}