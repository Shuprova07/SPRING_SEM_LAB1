#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter an identifier: ";
    cin >> input;

    bool isValid = true;

    if (!(isalpha(input[0]) || input[0] == '_'))
        isValid = false;

    for (int i = 1; i < input.length(); i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            isValid = false;
            break;
        }
    }

    if (isValid)
        cout << "Valid identifier" << endl;
    else
        cout << "Invalid identifier" << endl;

    return 0;
}
