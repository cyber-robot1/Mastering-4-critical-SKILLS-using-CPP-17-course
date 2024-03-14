/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int startN = 1;
    while (startN <= n)
    {
        int startM = 1;
        while (startM <= m)
        {
            cout << startN << " x " << startM << " = " << startN * startM << endl;
            startM++;
        }
        startN++;
    }
    
    return 0;
}
