/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int pairs = 0;
    for (int x = 50; x <= 300; x++)
    {
        for (int y = 70; y <= 400; y++)
        {
            bool con1 = (x < y);
            bool con2 = ((x + y) % 7 == 0);
            if (con1 && con2)
                pairs++;
        }
    }
    cout << pairs;
    
    return 0;
}
