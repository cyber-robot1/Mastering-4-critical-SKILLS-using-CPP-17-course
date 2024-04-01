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
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		bool flag = true;
		for (int i = 0; i < col; i++)
		{
			if (arr[x][i] > arr[y][i])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
