#include <iostream>
using namespace std;

class Student
{
    int marks[5];   // array inside class

public:
    void getMarks()
    {
        cout << "Enter 5 marks:\n";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void showMarks()
    {
        cout << "\nMarks are: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
    }

    void totalMarks()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];

        cout << "\nTotal Marks = " << total;
    }
};

int main()
{
    Student s;

    s.getMarks();
    s.showMarks();
    s.totalMarks();

    return 0;
}