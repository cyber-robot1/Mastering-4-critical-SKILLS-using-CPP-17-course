/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, sum;
    cin >> n >> m >> sum;

    int pairs = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ((i + j) == sum)
                pairs++;
        }
    }
    cout << pairs;
    
    return 0;
}
