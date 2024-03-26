/*
Author: Karim Tarek Ibrahim
Date: 26/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    string lower = "YZIMNESTODUAPWXHQFBRJKCGVL";
    string letter = "abcdefghijklmnopqrstuvwxyz";

    string symbol = "!@#$%^&*()";
    string digit = "0123456789";

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)        // isLower
        {
            for (int j = 0; j < 26;j++)
            {
                if (str[i] == letter[j])
                    str[i] = lower[j];
            }
        }
        else if (str[i] >= 48 && str[i] <= 57)   // isDigit
        {
            for (int j = 0; j < 10; j++)
            {
                if (str[i] == digit[j])
                    str[i] = symbol[j];
            }
        }
    }
    
    cout << str;
    
    return 0;
}
