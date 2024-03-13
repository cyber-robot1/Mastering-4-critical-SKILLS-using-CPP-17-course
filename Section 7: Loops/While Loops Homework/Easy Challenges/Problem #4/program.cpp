/*
Author: Karim Tarek Ibrahim
Date: 13/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int start = n, tmp;
    while (start >= 1)
    {
        tmp = start;
        while (tmp--)
            cout << '*';
        cout << endl;
        start--;
    }
    
    return 0;
}
