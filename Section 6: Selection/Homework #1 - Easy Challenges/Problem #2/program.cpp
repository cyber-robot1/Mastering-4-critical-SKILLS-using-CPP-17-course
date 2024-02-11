/*
Author: Karim Tarek Ibrahim
Date: 11/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int mx = 0;
    if (a >= b && a >= c)
        mx = a;
    else if (b >= a && b >= c)
        mx = b;
    else
        mx = c;

    int mn = 0;
    if (a <= b && a <= c)
        mn = a;
    else if (b <= a && b <= c)
        mn = b;
    else
        mn = c;

    int md = (a + b + c) - (mx + mn);
   
    cout << mn << " " << md << " " << mx << endl;

    return 0;
}
