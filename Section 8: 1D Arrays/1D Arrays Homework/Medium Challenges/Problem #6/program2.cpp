/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int freq[501];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        freq[num]++;
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
