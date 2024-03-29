/*
Author: Karim Tarek Ibrahim
Date: 29/3/2024
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

	// The given 2 columns to be swapped:
	int c1, c2;
	cin >> c1 >> c2;

	// Swapping 2 given Columns:
	for (int i = 0; i < row; i++)
		swap(arr[i][c1], arr[i][c2]);
	
	// Printing The New Matrix after Swapping:
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}
