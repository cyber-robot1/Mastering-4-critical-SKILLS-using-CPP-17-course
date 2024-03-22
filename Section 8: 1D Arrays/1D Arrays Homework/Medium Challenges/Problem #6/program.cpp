/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[901], freq[501];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i < 501; i++)
    {
        if (freq[i] != 0)
        {
            int x = freq[i];
            while (x--)
                cout << i << " ";
        }
    }
    
    return 0;
}
