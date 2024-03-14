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

    int first = 0, last = 1, sum = 0;
    for (int i = 2; i <= n; i++)
    {
        sum = first + last;
        first = last;
        last = sum;
    }
    if (n == 0)
        cout << first;
    else if (n == 1)
        cout << last;
    else
        cout << sum;
    
    return 0;
}
