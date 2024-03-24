/*
Author: Karim Tarek Ibrahim
Date: 24/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    string str, s;
    cin >> str >> s;
    int sSZ = s.size();

    int start = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (s[0] == str[i])
        {
            start = i;
            break;
        }
    }

    bool isSubstring = true;
    for (int i = start, j = 0; j < sSZ; i++, j++)
    {
        if (str[i] != s[j])
        {
            isSubstring = false;
            break;
        }
    }
    if (isSubstring)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
