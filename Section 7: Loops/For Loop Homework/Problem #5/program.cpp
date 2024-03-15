/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int flag = 2;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                flag++;
        }
        if (flag == 2)
        {
            if (i == n)
                cout << i;
            else
                cout << i << ",";
        }
    }
    
    return 0;
}
