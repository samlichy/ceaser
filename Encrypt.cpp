#include <iostream>
#include <string>

using namespace std;

int main()
{
        string str;
        int count = 0, length, ceaser;

        cout << "Enter your phrase: "<< endl;
        getline(cin, str);

        cout << "Enter your ceaser shift: " << endl;
        cin >> ceaser;

        length = (int)str.length();

        for (count = 0; count < length; count++)
        {
                if (isalpha(str[count]))
                {
                        str[count] = tolower(str[count]);

                        for (int i = 0; i < ceaser; i++)
                        {
                                if (str[count] == 'z')
                                {
                                        str[count] = 'a';
                                }
                                else
                                        str[count]++;
                        }
                }
        }
        
        cout << "Results: " << str  << endl;
