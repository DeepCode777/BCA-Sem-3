// #29 Example - Member Referencing Operator (.) In CPP

#include <iostream>
using namespace std;

struct student {
    int rno;
    char snm[10];
};

int main() {
    student s = {69, "Deep"};  // Directly initialize both members
    
    cout << "Student Roll No : " << s.rno << endl ; // 69
    cout << "Student Name : " << s.snm << endl; // Deep
    return 0;
}