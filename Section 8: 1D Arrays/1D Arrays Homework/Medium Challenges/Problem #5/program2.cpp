/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

bool con[501];  // all values are false.
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;

        if (!con[num])
            cout << num << " ";

        con[num] = true;
    }
    
    return 0;
}
