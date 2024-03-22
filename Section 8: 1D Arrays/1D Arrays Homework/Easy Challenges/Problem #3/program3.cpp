/*
Author: Karim Tarek Ibrahim
Solution by using array.
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[1000];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << arr[0] << " ";
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            cout << arr[i] << " ";
    }
    
    return 0;
}
