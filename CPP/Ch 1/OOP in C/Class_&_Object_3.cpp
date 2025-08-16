// Area Of Circle Using Class And Object
// #5 Example - 3 (Class & Object)

#include <iostream>
using namespace std;

class circle{
    public :
    double radius;
    double area;
    void area_is(){
        area = 3.14 * radius * radius ;
    }
};

int main() {
    circle c;
    c.radius = 5.5;
    
    cout << " \n Radious : " << c.radius << endl;
    c.area_is();
    cout << "\n Area = " << c.area;
    return 0;
} 