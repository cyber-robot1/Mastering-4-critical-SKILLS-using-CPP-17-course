/*
Author: Karim Tarek Ibrahim
Solution without using array.
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
      
        if (i > 1)
        {
            if (x != k)
                cout << x << " ";
        }
        else
            cout << x << " ";
      
        k = x;
    }
    
    return 0;
}
