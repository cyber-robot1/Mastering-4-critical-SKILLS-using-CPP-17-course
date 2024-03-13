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

    int start = 1;
    int num = 1;
    while (start <= n)
    {
        bool con = (num % 3 == 0 && num % 4 != 0);
        if (con)
        {
            cout << num << " ";
            start++;
        }
        num++;
    }
    
    return 0;
}
