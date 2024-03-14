/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mn = 0;
        bool flag = true;
        while (n--)
        {
            int num;
            cin >> num;
            if (flag)
            {
                mn = num;
                flag = false;
            }
            else if (num <= mn)
                mn = num;
        }
        cout << mn << endl;
    }
    
    return 0;
}
