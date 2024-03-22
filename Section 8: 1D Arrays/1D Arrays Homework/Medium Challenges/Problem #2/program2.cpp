/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int freq[501];  // frequency array to store NO. occurance of each element.
int pos[501];  // array to store the last occurance of each element.
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        freq[num]++;
        pos[num] = i;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        if (freq[x] != 0)
            cout << pos[x] << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}
