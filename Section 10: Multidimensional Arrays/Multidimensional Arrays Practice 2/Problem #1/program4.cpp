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

	int i = 0, j = 0, mxcellSUM = arr[0][0];
	while (true)
	{
		int NX = 0, NY = 0, mx;
		bool flag = true;
		for (int k = 0; k < 3; k++)
		{
			int nx = i + dx[k];
			int ny = j + dy[k];
			if (nx < row && ny < col)
			{
				if (flag)
				{
					mx = arr[nx][ny];
					NX = nx;
					NY = ny;
					flag = false;
				}
				else
				{
					if (arr[nx][ny] >= mx)
					{
						mx = arr[nx][ny];
						NX = nx;
						NY = ny;
					}
				}
			}
		}
		if (NX == 0 && NY == 0)
			break;
		i = NX;
		j = NY;
		mxcellSUM += mx;
	}
	cout << mxcellSUM;
	
	return 0;
}
