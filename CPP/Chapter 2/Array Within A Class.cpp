#include <iostream>
using namespace std;

class Student
{
    int marks[5];   // array inside class

public:
    void getMarks()
    {
        cout << "Enter 5 marks:" << endl;
        for (int i = 0; i < 5; i++)
            cin >> marks[i];

        cout << "Marks are: " << endl;
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " " << endl;
    }

    void totalMarks()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];

        cout << endl << "Total Marks = " << total << endl;
    }
};

int main()
{
    Student s;

    s.getMarks();
    s.totalMarks();

    return 0;
}