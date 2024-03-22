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
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        bool isFound = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (x == arr[i])
            {
                cout << i << endl;
                isFound = true;
                break;
            }
        }
        if (!isFound)
            cout << -1 << endl;
    }
    
    return 0;
}
