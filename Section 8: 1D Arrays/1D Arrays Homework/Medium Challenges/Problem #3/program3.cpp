/*
Author: Karim Tarek Ibrahim
Note: we get rid of the arr array not to use much memory.
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int freq[771];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        num += 500;
        freq[num]++;
    }

    int mxE = 0, mxV = 0;
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
