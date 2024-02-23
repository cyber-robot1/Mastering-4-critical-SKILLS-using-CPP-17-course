/*
Author: Karim Tarek Ibrahim
Date: 23/2/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;
    if (s1 == s2 && e1 == e2)
        cout << s1 << " " << e1;
    else
    {
        if (s1 < s2 && e1 < e2 && e1 > s2)
            cout << s2 << " " << e1;
        else if (s1 > s2 && e1 > e2 && s1 < e2)
            cout << s1 << " " << e2;
        else if (s1 == e2 || s2 == e1)
            cout << s1;
        else if (s1 < s2 && e1 > e2)
            cout << s2 << " " << e2;
        else if (s1 > s2 && e1 < e2)
            cout << s1 << " " << e1;
        else if (s1 < s2 && e1 == e2)
            cout << s2 << " " << e2;
        else if (s1 == s2 && e1 > e2)
            cout << s1 << " " << e2;
        else if (s1 > s2 && e1 == e2)
            cout << s1 << " " << e2;
        else if (s1 == s2 && e1 < e2)
            cout << s1 << " " << e1;
        else if ((s1 < s2 && e1 < e2 && e1 < s2) || (s1 > s2 && e1 > e2 && e1 > s2))
            cout << -1;
    }  

    return 0;
}
