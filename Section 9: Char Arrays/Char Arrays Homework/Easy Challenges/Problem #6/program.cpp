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
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0)
            cout << str[i];
        else
        {
            if (str[i] == str[i - 1])
                cout << str[i];
            else
                cout << " " << str[i];
        }
    }
    
    return 0;
}
