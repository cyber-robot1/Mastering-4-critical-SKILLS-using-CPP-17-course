/*
Author: Karim Tarek Ibrahim
Date: 31/3/2024
*/
#include <iostream>
using namespace std;

// Directional Array technique for 3-neighbors:
int dx[3] = { 0,1,1 };
int dy[3] = { 1,0,1 };

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

	int mx = arr[0][1];
	int mxcellSUM = arr[0][0];
	int i = 0, j = 0;
	while (true)
	{
		if (i == row - 1)
		{
			for (int k = j + 1; k < col; k++)
				mxcellSUM += arr[row - 1][k];
			break;
		}

		else if (j == col - 1)
		{
			for (int k = i + 1; k < row; k++)
				mxcellSUM += arr[k][col - 1];
			break;
		}
		
		else
		{
			int NX = 0, NY = 0;
			for (int k = 0; k < 3; k++)
			{
				int nx = i + dx[k];
				int ny = j + dy[k];
				if (arr[nx][ny] >= mx)
				{
					mx = arr[nx][ny];
					NX = nx;
					NY = ny;
				}
			}
			i = NX;
			j = NY;
			mxcellSUM += mx;
			mx = arr[i][j + 1];
			if (i == row - 1 && j == col - 1)
				break;
		}
	}
	cout << mxcellSUM;
	
	return 0;
}
