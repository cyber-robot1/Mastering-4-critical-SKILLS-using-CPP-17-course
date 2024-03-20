/*
Author: Karim Tarek Ibrahim
Date: 20/3/2024
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

    int pos1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[pos1])
            pos1 = i;
    }

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

    cout << arr[pos1] << " " << arr[pos2];
    
    return 0;
}
