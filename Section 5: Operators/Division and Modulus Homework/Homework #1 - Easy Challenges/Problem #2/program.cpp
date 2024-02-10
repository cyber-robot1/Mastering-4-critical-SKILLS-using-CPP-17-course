/*
Author: Karim Tarek Ibrahim
Date: 10/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{
    
    double a, b;
    cin >> a >> b;

    // get the integer part of the whole number
    int x = (int)a / (int)b;

    // Subtract the whole number from its integer part to get the fraction part
    cout << (a / b) - x << "\n";

    return 0;
}
