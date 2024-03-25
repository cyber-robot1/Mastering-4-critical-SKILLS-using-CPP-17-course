/*
Author: Karim Tarek Ibrahim
Date: 25/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    string str, s;
    cin >> str;
    cin >> s;

    bool c1 = false, c2 = true;
    int p1 = 0, p2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        c1 = false;
        if (i == 0)
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (s[i] == str[j])
                {
                    c1 = true;
                    p1 = j;
                    break;
                }
            }
        }
        else
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (s[i] == str[j])
                {
                    c1 = true;
                    p2 = j;

                    if (p2 <= p1)
                        c2 = false;
                    else
                    {
                        p1 = p2;
                        c2 = true;
                        break;
                    }
                }
            }
        }

        if (!c1 || !c2)
            break;
    }

    if (c1 && c2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
