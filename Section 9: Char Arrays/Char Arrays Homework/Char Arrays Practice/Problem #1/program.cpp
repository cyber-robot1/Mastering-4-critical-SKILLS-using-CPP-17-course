/*
Author: Karim Tarek Ibrahim
Date: 26/3/2024
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T, answer;
    cin >> S >> T;
  
    bool c1 = false, c2 = false;
    int i = 0, j = 0, s1 = S.size(), s2 = T.size();
    while (true)
    {
        if (c1 && c2)
            break;
        else
        {
            if (i == s1)
                c1 = true;
            else
            {
                answer += S[i];
                i++;
            }

            if (j == s2)
                c2 = true;
            else
            {
                answer += T[j];
                j++;
            }
        }
    }
    cout << answer;
    
    return 0;
}
