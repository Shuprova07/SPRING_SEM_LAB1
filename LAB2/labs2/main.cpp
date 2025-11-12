#include <iostream>
#include <fstream>
using namespace std;
 void check_identifier(string s);
 int main()
 {
     ifstream file("sample.txt");
     if(!file)

        {cout << "Error: could not open sample.txt file!"<<endl;
        return 1 ;
        }
         string s;
          cout<< " checking identifier...."<<endl;
          while (file >> s)
          {
              check_identifier(s);
          }
          file.close();
          return 0;
 }
