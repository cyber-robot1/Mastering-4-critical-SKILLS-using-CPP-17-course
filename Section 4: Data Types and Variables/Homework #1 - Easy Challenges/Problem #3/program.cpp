/*
Author: Karim Tarek Ibrahim
Date: 8/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{
    int x1, x2, x3, x4, x5, x6, x7, x8;
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8;
    int evenSum = 0, oddSum = 0;
    evenSum = x2 + x4 + x6 + x8;
    oddSum = x1 + x3 + x5 + x7;
    cout << evenSum << " " << oddSum << endl;

    return 0;
}
