/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, w;
    cin >> n >> m >> w;

    int pairs = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= w; k++)
            {
                if (i + j <= k)
                    pairs++;
            }
        }
    }
    cout << pairs;
    
    return 0;
}
