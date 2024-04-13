/*
Author: Karim Tarek Ibrahim
Date: 1/4/2024
*/
#include <iostream>
using namespace std;

int arr[100][100], transpose[100][100];
int main()
{
	int row, col;
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cin >> arr[i][j];
	}

	// Transposing the given matrix:
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			transpose[j][i] = arr[i][j];
	}

	// Printing the transposed matrix:
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
			cout << transpose[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
