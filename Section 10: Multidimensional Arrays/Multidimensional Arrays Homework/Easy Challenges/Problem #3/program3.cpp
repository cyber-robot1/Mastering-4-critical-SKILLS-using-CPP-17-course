/*
Author: Karim Tarek Ibrahim
Date: 1/4/2024
*/
#include <iostream>
using namespace std;

int transpose[100][100];
int main()
{
	int row, col;
	cin >> row >> col;

	// Input the array then transposing it:
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			int x;
			cin >> x;
			transpose[j][i] = x;
		}
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
