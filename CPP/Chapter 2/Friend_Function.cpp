// #17-18 Example (Friend Function) Combined By Deep

#include <iostream>
using namespace std;

class empl{ //class one
    int salary = 4000;
    friend void sal(empl e); //Defind Friend Function
};
void sal(empl e){
    cout << "\n Salary : " << e.salary << endl;
}


class largest{ // class two
    int a,b;
    public :
    void data(){
        cout << "\n Enter A : ";
        cin >> a;
        cout << "\n Enter B : ";
        cin >> b;
        
        cout << endl << " Value Of A : "<< a << endl << " Value Of B ; "<< b;
    }
    friend void max(largest l); //Defind Friend Function
};
void max(largest l){
    if (l.a > l.b){
        cout << "\n A is Greater ";
    }else{
        cout << "\n B Is Greater ";
    }
}
int main() {
    //class one here
    empl e;
    sal(e); 
    
    //class two here
    largest l1;
    l1.data();
    max(l1);
    return 0;
}