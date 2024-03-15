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
    if (n == 0 || n == 1)
        cout << "NO";
    else
    {
        int flag = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag++;
                break;
            }
        }

        if (flag)
            cout << "NO";
        else
            cout << "YES";
    }
    
    return 0;
}
