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

    int max1 = 0, max2 = 0;
    if (arr[0] >= arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] >= max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] >= max2)
            max2 = arr[i];
    }

    cout << max1 << " " << max2;
    
    return 0;
}
