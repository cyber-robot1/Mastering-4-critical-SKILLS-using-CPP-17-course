/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        int tmp = i, sumDigits = 0;
        while (tmp)
        {
            int digit = tmp % 10;
            tmp /= 10;
            sumDigits += digit;
        }
        if (sumDigits >= a && sumDigits <= b)
            result += i;
    }
    cout << result;
    
    return 0;
}
