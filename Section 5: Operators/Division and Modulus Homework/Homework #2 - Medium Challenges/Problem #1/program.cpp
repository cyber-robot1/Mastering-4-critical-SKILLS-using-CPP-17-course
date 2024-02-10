/*
Author: Karim Tarek Ibrahim
Date: 10/2/2024
*/

#include <iostream>   
using namespace std;

int main()
{  
    int num;
    cin >> num;

    bool is_even1 = !(num % 2);

    double fraction = (num / 2.0) - (num / 2);
    bool is_even2 = !(fraction);
  
    int digit = num % 10;
    bool is_even3 = !(digit % 2); 

    return 0;
}
