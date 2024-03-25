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

    int cnt = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0)
            cnt++;
        else
        {
            if (str[i] == str[i - 1])
                cnt++;
            else
            {
                cout << str[i - 1] << cnt << "_";
                cnt = 1;
            }
        }

        if (i == str.size() - 1)
            cout << str[i] << cnt;
    }
    
    return 0;
}
