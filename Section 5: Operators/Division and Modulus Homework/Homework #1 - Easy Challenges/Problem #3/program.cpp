/*
Author: Karim Tarek Ibrahim
Date: 10/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;             
    int result = x / y;        
    result *= y;
    cout << x - result << "\n";

    return 0;
}
