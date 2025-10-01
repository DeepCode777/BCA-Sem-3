#include <iostream>
using namespace std;

int main() {
    try {
        int age; // Age of the user
        
        cout << "Enter Your Age" << endl;
        cin >> age;

        // Check if age is at least 18
        if (age >= 18) {
            cout << endl << "Access granted - you are old enough.\n Because Your Age = " << age << endl;
        } else {
            // Throw exception because age is less than 18
            throw age;
        }
    }
    catch (int myNum) { // Catch block handles the thrown exception
        cout << "Access denied - You must be at least 18 years old." << endl;
        cout << "Age is: " << myNum << endl;
    }

    return 0;
}