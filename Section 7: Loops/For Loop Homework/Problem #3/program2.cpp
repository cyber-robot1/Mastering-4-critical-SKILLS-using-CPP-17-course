/*
Author: Karim Tarek Ibrahim
Date: 15/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int pairs = 0;
    for (int a = 1; a <= 200; a++)
    {
        for (int b = 1; b <= 200; b++)
        {
            for (int c = 1; c <= 200; c++)
            {
                int d = a + b - c;
                bool con = (d >= 1 && d <= 200);
                if (con)
                    pairs++;
            }
        }
    }
    cout << pairs;
    
    return 0;
}
