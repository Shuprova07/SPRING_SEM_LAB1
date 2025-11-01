#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter something: ";
    cin >> input;

    bool isNumeric = true;

    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}
