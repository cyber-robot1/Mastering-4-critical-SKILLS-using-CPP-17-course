/*
Author: Karim Tarek Ibrahim
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

    // First Minimum position:
    int pos1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[pos1])
            pos1 = i;
    }
    
    // Second Minimum position:
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
        if (arr[i] <= arr[pos2] && i != pos1)
            pos2 = i;
    }
    
    // Printing the smallest pair:
    cout << arr[pos1] + arr[pos2] + pos2 - pos1;
    
    return 0;
}
