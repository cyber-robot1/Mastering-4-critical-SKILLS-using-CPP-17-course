/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[200], freq[151];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    // most frequent element
    int mxFreq = 0;
    int mx = freq[0];
    for (int i = 0; i < 151; i++)
    {
        if (freq[i] >= mx)
        {
            mx = freq[i];
            mxFreq = i;
        }
    }
    cout << mxFreq << " repeated " << mx << " times";
    
    return 0;
}
