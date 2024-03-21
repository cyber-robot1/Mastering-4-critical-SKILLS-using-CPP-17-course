/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[200], freq[200];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    // minimum element in array.
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= mn)
            mn = arr[i];
    }

    // maximum element in array.
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= mx)
            mx = arr[i];
    }

    // most frequent element
    int mxFreq = 0;
    int MX = freq[mn];
    for (int i = mn; i <= mx; i++)
    {
        if (freq[i] >= MX)
        {
            MX = freq[i];
            mxFreq = i;
        }
    }

    cout << mxFreq;
    
    return 0;
}
