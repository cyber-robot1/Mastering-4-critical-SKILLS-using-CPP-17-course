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

    int mn = (arr[0] + arr[1] + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j] + j - i) <= mn)
                mn = arr[i] + arr[j] + j - i;
        }
    }

    cout << mn;
    
    return 0;
}
