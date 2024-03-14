/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int pairs = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = i; j <= y; j++)
        {
            bool con1 = (i >= 50 && i <= 300);
            bool con2 = (j >= 70 && j <= 400);
            bool con3 = (i < j);
            bool con4 = ((i + j) % 7 == 0);
            if (con1 && con2 && con3 && con4)
                pairs++;
        }
    }
    cout << pairs;
    
    return 0;
}
