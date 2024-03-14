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

    cout << first << " " << last << " ";
    for (int i = 2; i <= n; i++)
    {
        sum = first + last;
        first = last;
        last = sum;
        
        cout << sum << " ";
    }
    
    return 0;
}
