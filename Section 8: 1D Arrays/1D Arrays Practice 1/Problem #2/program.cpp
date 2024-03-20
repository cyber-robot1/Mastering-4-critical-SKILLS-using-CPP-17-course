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
    
    int mx = arr[0] + arr[1];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) >= mx)
                mx = arr[i] + arr[j];
        }
    }

    cout << mx;
    
    return 0;
}
