/*
Author: Karim Tarek Ibrahim
Date: 8/3/2024
*/

#include <iostream>
using namespace std;  

int main()
{
    int x, digits = 0;
    cin >> x;
    
    if (x == 0)    // if the entered number is zero.
        digits++;
    else
    {
        while (x)   
        {
            digits++;
            x /= 10;
        }
    }
    
    cout << digits;
    
    return 0;
}
