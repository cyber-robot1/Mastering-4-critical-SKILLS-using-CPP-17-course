/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = 2;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            flag++;
    }

    if (flag == 2)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
