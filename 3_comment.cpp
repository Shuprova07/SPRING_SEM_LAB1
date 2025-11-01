#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    getline(cin, input);

    if (input.substr(0, 2) == "//") {
        cout << "This is a single-line comment" << endl;
    }
    else if (input.substr(0, 2) == "/*") {
        string nextLine;
        while (input.find("*/") == string::npos) {
            if (!getline(cin, nextLine)) break;
            input += "\n" + nextLine;
        }

        if (input.find("*/") != string::npos)
            cout << "This is a multi-line comment" << endl;
        else
            cout << "Unfinished comment (missing */)" << endl;
    }
    else {
        cout << "This is not a comment" << endl;
    }

    return 0;
}
