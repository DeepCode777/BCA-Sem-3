// #24 Example Of Enumeration

#include <iostream>
using namespace std;

enum week {
    Monday, Tuseday, Wednessday, Thuresday, Friday, Satday,Sunday
};

int main() {
    week day;
    day = Friday;
    cout << "The day is " << day << endl ; // Output - 4
    return 0;
}