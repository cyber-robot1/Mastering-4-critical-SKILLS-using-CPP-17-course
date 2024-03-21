/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[200];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mxRepeatE = arr[0];
    int mxValue = 0;
    for (int i = 0; i < n; i++)
    {
        int mxRepeat = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                mxRepeat++;
        }
        if (mxRepeat >= mxValue)
        {
            mxValue = mxRepeat;
            mxRepeatE = arr[i];
        }
    }

    cout << mxRepeatE << " repeated " << mxValue << " times";
    
    return 0;
}
