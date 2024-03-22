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

    // Minimum element:
    int mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= mn)
            mn = arr[i];
    }

    // Maximum element:
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= mx)
            mx = arr[i];
    }

    // Replacing min element with max one and vise versa:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mn)
            arr[i] = mx;

        else if (arr[i] == mx)
            arr[i] = mn;
    }

    // Printing the whole array:
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
