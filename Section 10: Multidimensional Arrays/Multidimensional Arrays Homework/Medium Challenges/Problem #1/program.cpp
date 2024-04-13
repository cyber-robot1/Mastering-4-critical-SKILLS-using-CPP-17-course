/*
Author: Karim Tarek Ibrahim
Date: 1/4/2024
*/
#include <iostream>
using namespace std;

int arr[100][100];
int main()
{

	int row, col;
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cin >> arr[i][j];
	}

	int q;
	cin >> q;
	while (q--)
	{
		int i, j, r, c;
		cin >> i >> j >> r >> c;
		int a = 1, b = 1, tmp = j;

		int noPrimes = 0;
		bool isPrime = true;
		while (a <= r)
		{
			while (b <= c)
			{
				isPrime = true;
				if (arr[i][j] == 0 || arr[i][j] == 1)
					isPrime = false;
				else
				{
					for (int k = 2; k <= arr[i][j] / 2; k++)
					{
						if (arr[i][j] % k == 0)
						{
							isPrime = false;
							break;
						}
					}
				}
				
				if (isPrime)
					noPrimes++;

				if (b != c)
					j++;
				b++;
			}
			a++;
			i++;
			b = 1;
			j = tmp;
		}
		cout << noPrimes << endl;
		noPrimes = 0;
	}
	
	return 0;
}
