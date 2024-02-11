/*
Author: Karim Tarek Ibrahim
Date: 11/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    
    bool is_A_even = (A % 2 == 0);
    bool is_B_even = (B % 2 == 0);

    if (!is_A_even && !is_B_even)
        cout << A * B << endl;
    
    else if (is_A_even && is_B_even)
        cout << A / B << endl;
    
    else if (!is_A_even && is_B_even)
        cout << A + B << endl;
    
    else if (is_A_even && !is_B_even)
        cout << A - B << endl;

    return 0;
}
