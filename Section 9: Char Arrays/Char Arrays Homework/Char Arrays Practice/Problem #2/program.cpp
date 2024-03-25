/*
Author: Karim Tarek Ibrahim
Date: 26/3/2024
*/

#include <iostream>
using namespace std;

int freq[123];
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            freq[str[i]]++;
    }

    for (int i = 97; i < 123; i++)
    {
        if (freq[i] != 0)
            cout << char(i) << " " << freq[i] << endl;
    }
    
    return 0;
}
