/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int arr[201], freq[10];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            freq[arr[i]]++;

        int num = arr[i];
        while (num)
        {
            freq[num % 10]++;
            num /= 10;
        }
    }

    for (int i = 0; i < 10; i++)
        cout << i << " " << freq[i] << endl;
    
    return 0;
}
