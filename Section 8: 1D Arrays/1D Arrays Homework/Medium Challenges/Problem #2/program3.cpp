/*
Author: Karim Tarek Ibrahim
Optimized than program2.cpp that we get rid of the freq array not to use much memory.
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int pos[501];  // array to store the last occurance of each element.
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 501; i++)
        pos[i] = -1;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        pos[num] = i;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << pos[x] << endl;
    }
    
    return 0;
}
