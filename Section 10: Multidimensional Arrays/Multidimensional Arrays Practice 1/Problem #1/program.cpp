/*
Author: Karim Tarek Ibrahim
Date: 29/3/2024
*/
#include <iostream>
using namespace std;

int arr[10][10];
int main()
{
	int row, col;
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cin >> arr[i][j];
	}

	int mx = arr[0][0], mxRow = 0, mxCol = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 1; j < col; j++)
		{
			if (arr[i][j] >= mx)
			{
				mx = arr[i][j];
				mxRow = i;
				mxCol = j;
			}
		}
	}

	cout << mxRow << " " << mxCol;

	return 0;
}
