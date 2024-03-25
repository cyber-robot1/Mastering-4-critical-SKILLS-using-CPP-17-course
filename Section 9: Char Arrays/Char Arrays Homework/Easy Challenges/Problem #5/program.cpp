/*
Author: Karim Tarek Ibrahim
Date: 25/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int num = 0;
    for (int i = 0; i < str.size(); i++)
    {
        int digit = str[i] - '0';
        num = num * 10 + digit;
    }

    cout << num * 3;
    
    return 0;
}
