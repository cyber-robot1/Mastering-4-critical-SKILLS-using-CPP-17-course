/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int r = 0;
    while (n)
    {
        int digit = n % 10;
        n /= 10;
        r = (r * 10) + digit;
    }
    cout << r << " " << r * 3;
    
    return 0;
}
