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
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0, pos = 1;
        while (n--)
        {
            int num, cross = 1, tmp = pos;
            cin >> num;

            while (tmp--)
                cross *= num;

            sum += cross;
            pos++;
        }
        cout << sum << endl;
    }
    
    return 0;
}
