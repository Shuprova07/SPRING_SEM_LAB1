#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;

    cout << "Full name: " << fullName << endl;

    return 0;
}
