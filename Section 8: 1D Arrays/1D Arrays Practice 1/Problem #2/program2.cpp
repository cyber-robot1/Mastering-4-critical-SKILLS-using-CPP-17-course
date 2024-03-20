/*
Author: Karim Tarek Ibrahim
Date: 21/3/2024
*/

#include <bits/stdc++.h>
using namespace std;

int arr[200];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    /***********************************************/
    // First Max:
    int pos1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[pos1])
            pos1 = i;
    }
    /***********************************************/
    // Second Max:
    int pos2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != pos1)
        {
            pos2 = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[pos2] && i != pos1)
            pos2 = i;
    }
    /************************************************/
    // Maximum Pair Sum:
    cout << arr[pos1] + arr[pos2];
    
    return 0;
}
