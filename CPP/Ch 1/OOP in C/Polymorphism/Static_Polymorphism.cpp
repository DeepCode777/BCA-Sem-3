// #8 Example - (Method Overloading) - Static Polymorphism

#include <iostream>
using namespace std;

class addition{
    public :
    int sum;
    void add(int a, int b){
        sum = a + b ;
        cout << "\n Sum = " << sum ;
    }
    void add(float x, float y, float z){ // Sem Function with Diffrent Paramiter
        float ans;
        ans = x + y + z;
        cout << "\n Ans = " << ans << endl;
    }
};

int main() {
    addition a1;
    a1.add(10,20);
    a1.add(10.5,20.5,30.5);
    return 0;
}
