/*
Author: Karim Tarek Ibrahim
Date: 14/3/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str.size() == 2)
        {
            int sum = 0;
            for (int i = 0; i < str.size(); i++)
                sum += str[i];
            
            if (sum == 157 || sum == 221 || sum == 189)
                cout << str << " ";
        }
    }
    
    return 0;
}
