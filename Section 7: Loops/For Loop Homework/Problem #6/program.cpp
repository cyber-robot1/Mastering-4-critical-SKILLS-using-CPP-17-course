/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, result = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        int tmp = i, sumDigits = 0;
        while (tmp)
        {
            sumDigits += tmp % 10;
            tmp /= 10;
        }
        if (sumDigits >= a && sumDigits <= b)
            result += i;
    }
    cout << result;
    
    return 0;
}
