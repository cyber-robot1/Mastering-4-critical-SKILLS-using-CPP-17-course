/*
Author: Karim Tarek Ibrahim
Date: 1/4/2024
*/
#include <iostream>
using namespace std;

// Directional Array to visit all 8-neighbours of a given cell
int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { -1,0,1,-1,1,-1,0,1 };


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

	bool isGreat = true;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			isGreat = true;
			for (int k = 0; k < 8; k++)
			{
				int nx = i + dx[k];
				int ny = j + dy[k];
				if (nx < row && ny < col)
				{
					if (arr[i][j] <= arr[nx][ny])
					{
						isGreat = false;
						break;
					}
				}
			}
			if (isGreat)
				cout << i << " " << j << endl;
		}
	}
	
	return 0;
}
