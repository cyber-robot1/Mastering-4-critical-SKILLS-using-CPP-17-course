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

    bool isIncreasing = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            isIncreasing = false;
            break;
        }
    }
    if (isIncreasing)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
