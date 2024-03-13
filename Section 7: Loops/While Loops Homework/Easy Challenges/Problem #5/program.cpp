/*
Author: Karim Tarek Ibrahim
Date: 13/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int noODD = 0, sumODD = 0, noEVEN = 0, sumEVEN = 0;
    int start = 1;
    while (start <= n)
    {
        int num;
        cin >> num;
        if (start % 2 == 0)
        {
            sumEVEN += num;
            noEVEN++;
        }
        else
        {
            sumODD += num;
            noODD++;
        }
        start++;
    }
    cout << (double)sumODD / noODD << " " << (double)sumEVEN / noEVEN;
    
    return 0;
}
