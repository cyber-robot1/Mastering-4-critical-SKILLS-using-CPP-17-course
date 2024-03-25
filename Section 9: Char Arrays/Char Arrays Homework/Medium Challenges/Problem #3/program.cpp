/*
Author: Karim Tarek Ibrahim
Note: Handle that test case: input => 9 or 99 or 999 or 999 (input that will cause a change in the whole string)
Date: 25/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int sz = str.size() - 1;
    int rest = 0;
    int c = 0;
    while (true)
    {
        if (c == 4 && rest == 0)
            break;
        else
        {
            int digit = str[sz] - '0';
            if (c < 4)
            {
                digit = digit + 5 + rest;
                c++;
            }
            else
                digit = digit + rest;
                                       
            if (digit > 9)
            {
                str[sz] = digit % 10 + '0';
                digit /= 10;
                rest = digit;
            }
            else
            {
                str[sz] = digit + '0';
                rest = 0;
            }
            sz--;
        }
    }
    
    cout << str;
    
    return 0;
}
