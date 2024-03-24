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

    bool isPrefix = true;
    for (int i = 0, j = 0; j < s.size(); i++, j++)
    {
        if (str[i] != s[j])
        {
            isPrefix = false;
            break;
        }
    }
    if (isPrefix)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
