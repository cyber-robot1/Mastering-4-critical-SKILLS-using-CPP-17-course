/*
Author: Karim Tarek Ibrahim
Date: 22/3/2024
*/

#include <iostream>
using namespace std;

int freq[10];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
            freq[num]++;

        int tmp = num;
        while (tmp)
        {
            freq[tmp % 10]++;
            tmp /= 10;
        }
    }

    for (int i = 0; i < 10; i++)
        cout << i << " " << freq[i] << endl;
    
    return 0;
}
