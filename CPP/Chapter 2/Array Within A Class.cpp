#include <iostream>
using namespace std;

class Student
{
    int marks[5]; // array inside class

public:
    void getMarks()
    {
        cout << "Enter 5 marks:\n";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void showMarks()
    {
        cout << "Marks are: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
    }
};

int main()
{
    Student s;  // object
    s.getMarks();
    s.showMarks();

    return 0;
}