/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int start = 0;
    while (start <= n)
    {
        bool con1 = (start % 8 == 0);
        bool con2 = (start % 3 == 0 && start % 4 == 0);
        if (con1 || con2)
            cout << start << " ";
        start++;
    }
    
    return 0;
}
