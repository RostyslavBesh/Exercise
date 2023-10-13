#include <iostream>
#include<vector>
#include<cstring>
#include<cctype>
#include<string>

using namespace std;
int main()
{
    string letters_Eng{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string letters_Cipher{ "ZYXRWUODFLKTSGCAHMIEVJPBQNHrsegbkdwxqzvhnmufyojlticap" };
    string message{};
    cout << "Enter secret messegage: ";
    getline(cin, message);
    for (size_t i{0}; i < message.size(); i++)
    {
        for (size_t j{0}; j < letters_Eng.size(); j++)
        {
            if (message[i]==letters_Eng[j])
            {
                message[i] = letters_Cipher[j];
                break;
            }
        }
    }
    cout <<"Secret messegage: "<< message<<endl;
    for (size_t i{ 0 }; i < message.size(); i++)
    {
        for (size_t j{ 0 }; j < letters_Cipher.size(); j++)
        {
            if (message[i] == letters_Cipher[j])
            {
                message[i] = letters_Eng[j];
                break;
            }
        }
    }
    cout << "Your messegage: " << message<<endl;
    return 0;
}


