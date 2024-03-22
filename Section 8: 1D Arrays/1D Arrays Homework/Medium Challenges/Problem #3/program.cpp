/*
Author: Karim Tarek Ibrahim
Note: we wanna optimize this solution by get rid of the nested loop.
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[201];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int mxE = arr[0];
    int mxV = 0;
    for (int i = 0; i < n; i++)
    {
        int mxR = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                mxR++;
        }
        if (mxR >= mxV)
        {
            mxV = mxR;
            mxE = arr[i];
        }
    }
    cout << mxE << " repeated " << mxV << " times";
    
    return 0;
}
