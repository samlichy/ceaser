#include <iostream>
#include <string>

using namespace std;

int main()
{
        string cipher;
        char plaintext;
        int key, length, count;

        cout << "Cipher text: " << endl;
        getline(cin, cipher);

        length = (int)cipher.length();

        for (key = 0; key < 26; key++)
        {
                for (count = 0; count < length; count++)
                {
                        if (isalpha(cipher[count]))
                        {
                                cipher[count] = tolower(cipher[count]);
                                plaintext = cipher[count];

                                if (plaintext >= 'a' && plaintext <= 'z')
                                {
                                        plaintext = plaintext - key;

                                        if (plaintext < 'a')
                                        {
                                                plaintext = plaintext + 'z' - 'a' +1;
                                        }
                                }
                        }
                        cipher[count] = plaintext;
                }
                cout << "Decryption with key =" << key << "is: " << cipher << endl;
                
        }
}
