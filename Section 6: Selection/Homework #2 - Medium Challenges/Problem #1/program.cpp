/*
Author: Karim Tarek Ibrahim
Date: 23/2/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int mx = 0;
    if (x >= y)
        mx = x;
    else
        mx = y;

    cin >> x >> y;
    if (x >= y)
    {
        if (x >= mx)
            mx = x;
    }
    else
    {
        if (y >= mx)
            mx = y;
    }

    cin >> x >> y;
    if (x >= y)
    {
        if (x >= mx)
            mx = x;
    }
    else
    {
        if (y >= mx)
            mx = y;
    }

    cin >> x >> y;
    if (x >= y)
    {
        if (x >= mx)
            mx = x;
    }
    else
    {
        if (y >= mx)
            mx = y;
    }

    cin >> x >> y;
    if (x >= y)
    {
        if (x >= mx)
            mx = x;
    }
    else
    {
        if (y >= mx)
            mx = y;
    }

    cout << mx << endl;


    return 0;
}
