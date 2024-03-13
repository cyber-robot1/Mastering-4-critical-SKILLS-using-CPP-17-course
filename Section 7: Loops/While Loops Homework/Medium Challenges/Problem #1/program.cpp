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

    int i = 1;
    int start = 1, tmp_start;
    int spaces = n - 1, tmp_spaces;
    while (i <= n)
    {
        tmp_spaces = spaces;
        while (tmp_spaces--)
            cout << " ";
        tmp_start = start;
        while (tmp_start--)
            cout << '*';
        tmp_spaces = spaces;
        while (tmp_spaces--)
            cout << " ";
        cout << endl;

        start += 2;
        spaces--;
        i++;
    }

    start -= 2;
    spaces++;

    i = 1;                
    while (i <= n)
    {
        tmp_spaces = spaces;
        while (tmp_spaces--)
            cout << " ";
        tmp_start = start;
        while (tmp_start--)
            cout << '*';
        tmp_spaces = spaces;
        while (tmp_spaces--)
            cout << " ";
        cout << endl;

        start -= 2;
        spaces++;
        i++;
    }
    
    return 0;
}
