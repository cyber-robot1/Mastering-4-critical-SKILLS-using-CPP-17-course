/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[901];
bool con[501];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        con[arr[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (con[arr[i]])
        {
            cout << arr[i] << " ";
            con[arr[i]] = false;
        }
    }
    
    return 0;
}
