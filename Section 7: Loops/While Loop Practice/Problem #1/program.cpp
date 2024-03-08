/*
Author: Karim Tarek Ibrahim
Date: 8/3/2024
*/

#include <iostream>
using namespace std;  

int main()
{   
    int x;
    cin >> x;

    int start = 3;
    while (start <= x)
    {
        cout << start << " ";
        start += 3;
    }
    
    return 0;
}
