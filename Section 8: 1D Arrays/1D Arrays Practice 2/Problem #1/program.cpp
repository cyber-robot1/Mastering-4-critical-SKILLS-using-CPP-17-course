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

    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - i - 1]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
