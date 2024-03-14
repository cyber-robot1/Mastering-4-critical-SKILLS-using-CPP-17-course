/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int pairs = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= b; j++)
        {
            for (int k = j; j <= c; k++)
            {
                for (int z = k; z <= d; z++)
                {
                    bool c1 = ((i >= 1 && i <= 200) && (j >= 1 && j <= 200) && (k >= 1 && k <= 200) && (z >= 1 && z <= 200));
                    bool c2 = ((i + j) == (k + z));
                    if (c1 && c2)
                        pairs++;
                }
            }
        }
    }
    cout << pairs;
    
    return 0;
}
