/*
Author: Karim Tarek Ibrahim
Date: 23/2/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int mx = 0;
    int x, y;
    cin >> x >> y;
    if (x >= y)
        mx = x;
    else
        mx = y;

    if (N == 2)
        cout << mx << endl;
    else
    {
        if (N == 3)
        {
            cin >> x;
            if (x >= mx)
                mx = x;
        }
        else if (N == 4)
        {
            cin >> x >> y;
            if (x >= y)
            {
                if (x >= mx)
                    mx = x;
            }
            else
            {
                if (y >= mx)
                    mx = y;
            }
        }
        else if (N == 5)
        {
            cin >> x >> y;
            if (x >= y)
            {
                if (x >= mx)
                    mx = x;
            }
            else
            {
                if (y >= mx)
                    mx = y;
            }
            cin >> x;
            if (x >= mx)
                mx = x;
        }
        else
        {
            cin >> x >> y;
            if (x >= y)
            {
                if (x >= mx)
                    mx = x;
            }
            else
            {
                if (y >= mx)
                    mx = y;
            }
            cin >> x >> y;
            if (x >= y)
            {
                if (x >= mx)
                    mx = x;
            }
            else
            {
                if (y >= mx)
                    mx = y;
            }
            if (N == 6)
                cout << mx << endl;
            else if (N == 7)
            {
                cin >> x;
                if (x >= mx)
                    mx = x;
            }
            else if (N == 8)
            {
                cin >> x >> y;
                if (x >= y)
                {
                    if (x >= mx)
                        mx = x;
                }
                else
                {
                    if (y >= mx)
                        mx = y;
                }
            }
            else if (N == 9)
            {
                cin >> x >> y;
                if (x >= y)
                {
                    if (x >= mx)
                        mx = x;
                }
                else
                {
                    if (y >= mx)
                        mx = y;
                }
                cin >> x;
                if (x >= mx)
                    mx = x;
            }
            else if (N == 10)
            {
                cin >> x >> y;
                if (x >= y)
                {
                    if (x >= mx)
                        mx = x;
                }
                else
                {
                    if (y >= mx)
                        mx = y;
                }
                cin >> x >> y;
                if (x >= y)
                {
                    if (x >= mx)
                        mx = x;
                }
                else
                {
                    if (y >= mx)
                        mx = y;
                }
            }
        }
        if (N != 6)
            cout << mx << endl;
    }

    return 0;
}
