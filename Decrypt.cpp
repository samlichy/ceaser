#include <iostream>
#include <string>

using namespace std;

int main()
{
        string cipher, plaintext;
        int key, length, count;

        cout << "Cipher text: " << endl;
        getline(cin, cipher);

        for (key = 0; key < 26; key++)
        {
                plaintext = cipher;
                length = (int)plaintext.length();

                for (count = 0; count < length; count++)
                {
                        if (isalpha(plaintext[count]))
                        {
                                plaintext[count] = tolower(plaintext[count]);

                                for (int j = 0; j < key; j++)
                                {
                                        if (plaintext[count] == 'a')
                                        {
                                                plaintext[count] = 'z';
                                        }
                                        else
                                        {
                                                plaintext[count]--;
                                        }
                                }
                        }
                }
        cout << "Decryption with key = " << key << " is: " << plaintext << endl;
        }
}
