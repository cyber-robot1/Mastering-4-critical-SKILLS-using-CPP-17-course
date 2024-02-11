/*
Author: Karim Tarek Ibrahim
Date: 11/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{
    int X, x1, x2, x3, x4, x5;
    cin >> X >> x1 >> x2 >> x3 >> x4 >> x5;
    int val1 = 0, val2 = 0;

    if (x1 <= X)
        val1++;
    if (x2 <= X)
        val1++;
    if (x3 <= X)
        val1++;
    if (x4 <= X)
        val1++;
    if (x5 <= X)
        val1++;

    if (x1 > X)
        val2++;
    if (x2 > X)
        val2++;
    if (x3 > X)
        val2++;
    if (x4 > X)
        val2++;
    if (x5 > X)
        val2++;
    
    cout << val1 << " " << val2 << endl;

    return 0;
}
