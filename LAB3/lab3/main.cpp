#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int isKeyword(string w)
{
    if (w == "int") return 1;
    if (w == "float") return 1;
    if (w == "char") return 1;
    if (w == "double") return 1;
    if (w == "if") return 1;
    if (w == "else") return 1;
    if (w == "for") return 1;
    if (w == "while") return 1;
    if (w == "return") return 1;
    if (w == "void") return 1;
    if (w == "cout") return 1;
    if (w == "cin") return 1;

    return 0;
}

int isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' ||
        c == '=' || c == '<' || c == '>' || c == '!')
        return 1;

    return 0;
}

int isPunc(char c)
{
    if (c == '(' || c == ')' || c == '{' || c == '}' ||
        c == ';' || c == ',' || c == '[' || c == ']')
        return 1;

    return 0;
}

int main()
{
    ifstream f("sample.txt");
    string line;

    if (!f.is_open()) {
        cout << "File not found!" << endl;
        return 0;
    }

    while (getline(f, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            char ch = line[i];

            if (isPunc(ch))
            {
                cout << ch << " => PUNCTUATION" << endl;
                continue;
            }

            if (isOperator(ch))
            {
                cout << ch << " => OPERATOR" << endl;
                continue;
            }

            if (isalpha(ch) || ch == '_')
            {
                string word = "";
                while (i < line.length() && (isalnum(line[i]) || line[i] == '_'))
                {
                    word = word + line[i];
                    i++;
                }
                i--;

                if (isKeyword(word))
                    cout << word << " => KEYWORD" << endl;
                else
                    cout << word << " => IDENTIFIER" << endl;

                continue;
            }

            if (isdigit(ch))
            {
                string num = "";
                while (i < line.length() && isdigit(line[i]))
                {
                    num = num + line[i];
                    i++;
                }
                i--;

                cout << num << " => CONSTANT" << endl;
            }
        }
    }

    return 0;
}
