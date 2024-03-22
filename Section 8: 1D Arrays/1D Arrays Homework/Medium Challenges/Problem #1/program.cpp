/*
Author: Karim Tarek Ibrahim
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
    /****************************************/
    // First Min:
    int pos1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[pos1])
            pos1 = i;
    }
    /*******************************************/
    // Second Min:
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
    /*******************************************/
    // Third Min:
    int pos3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != pos1 && i != pos2)
        {
            pos3 = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[pos3] && i != pos1 && i != pos2)
            pos3 = i;
    }
    /**********************************************/
    // Printing the 3 minimum values:
    cout << arr[pos1] << " " << arr[pos2] << " " << arr[pos3];
    
    return 0;
}
