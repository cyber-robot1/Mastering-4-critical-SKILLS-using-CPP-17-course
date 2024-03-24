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
    int strSZ = str.size(), sSZ = s.size();

    bool isSuffix = true;
    for (int i = strSZ - 1, j = sSZ - 1; j >= 0; i--, j--)
    {
        if (str[i] != s[j])
        {
            isSuffix = false;
            break;
        }
    }
    if (isSuffix)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
