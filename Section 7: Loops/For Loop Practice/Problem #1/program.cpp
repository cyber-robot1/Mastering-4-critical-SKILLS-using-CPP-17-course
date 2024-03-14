/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int sum = 0, pos = 1;
        for (int j = 1; j <= n; j++)
        {
            int num, cross = 1;
            cin >> num;

            for (int k = 1; k <= pos; k++)
                cross *= num;

            sum += cross;
            pos++;
        }
        cout << sum << endl;
    }
    
    return 0;
}
