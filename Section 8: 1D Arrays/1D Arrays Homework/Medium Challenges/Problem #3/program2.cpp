/*
Author: Karim Tarek Ibrahim
Note: Optimized than program.cpp because we get rid of the nested loop by shifting the negative values, then return it to its original while printing.
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[201], freq[271];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] += 500;
        freq[arr[i]]++;
    }

    int mxV = 0;
    int mxE = arr[0];
    for (int i = 0; i < 771; i++)
    {
        if (freq[i] >= mxV)
        {
            mxV = freq[i];
            mxE = i;
        }
    }

    cout << mxE - 500 << " repeated " << mxV << " times";
    
    return 0;
}
