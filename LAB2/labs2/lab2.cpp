#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void check_identifier(string s)
{
    int flag =0;

    if ((s[0]>= 'a' && s[0] <= 'z') ||
         (s[0]>= 'A' && s[0] <= 'Z') ||
          s[0]=='_')
         {
             flag =1;
             for (int i = 1; i < s.length();i++)
    {
         if ((s[i]>= 'a' && s[i] <= 'z') ||
         (s[i]>= 'A' && s[i] <= 'Z') ||
          s[i]=='_'||
          (s[i] >= '0' && s[i] <= '9'))
             {
                 flag =1;
             }
             else
             {
                 flag = 0 ;
                 break;
             }
         }
}
if (flag == 1)
    cout << s<< "Identifier"<<endl;
else
    cout<<s<< "not Identifier" <<endl;
}
