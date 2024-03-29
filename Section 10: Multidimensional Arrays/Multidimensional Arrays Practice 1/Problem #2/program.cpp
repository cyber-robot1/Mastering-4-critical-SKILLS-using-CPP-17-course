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

	// Left Diagonal:
	int leftdSUM = 0;
	for (int i = 0, j = 0; i < row && j < col; i++, j++)
		leftdSUM += arr[i][j];

	// Right Diagonal:
	int rightdSUM = 0;
	for (int i = 0, j = col - 1; i < row && j >= 0; i++, j--)
		rightdSUM += arr[i][j];

	// Final Row:
	int frowSUM = 0;
	for (int i = 0; i < col; i++)
		frowSUM += arr[row - 1][i];

	// Final Column:
	int fcolSUM = 0;
	for (int i = 0; i < row; i++)
		fcolSUM += arr[i][col - 1];

	cout << leftdSUM << " " << rightdSUM << endl;
	cout << frowSUM << " " << fcolSUM << endl;

	return 0;
}
