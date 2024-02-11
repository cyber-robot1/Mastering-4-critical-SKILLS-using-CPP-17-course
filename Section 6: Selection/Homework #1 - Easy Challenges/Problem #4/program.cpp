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
    int val = 0;

    val += (x1 <= X);
    val += (x2 <= X);
    val += (x3 <= X);
    val += (x4 <= X);
    val += (x5 <= X);
    
    cout << val << " " << 5 - val << endl;

    return 0;
}
