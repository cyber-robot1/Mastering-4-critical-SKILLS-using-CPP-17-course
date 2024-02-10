/*
Author: Karim Tarek Ibrahim
Date: 10/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{
    double x1, x2, x3, x4, x5;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    
    // Average
    cout << (x1 + x2 + x3 + x4 + x5) / 5 << "\n";

    // Sum of first 3 numbers divided by the sum of last two numbers
    cout << (x1 + x2 + x3) / (x4 + x5) << "\n";

    // Average of first 3 numbers divided by average of last two numbers
    cout << ((x1 + x2 + x3) / 3) / ((x4 + x5) / 2) << "\n";    
 
    /*
    C = 2/3 * B
    */

    return 0;
}
