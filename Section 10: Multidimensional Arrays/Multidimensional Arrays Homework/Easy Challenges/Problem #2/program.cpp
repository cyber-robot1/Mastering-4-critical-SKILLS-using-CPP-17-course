/*
Author: Karim Tarek Ibrahim
Date: 1/4/2024
*/
#include <iostream>
using namespace std;

int arr[100][100];
int main()
{
	int row;
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
			cin >> arr[i][j];
	}
	
	// Get sum of Lower Triangular Matrix elements:
	double lower_triangle = 0;
	for (int i = 0; i < row; i++)
	{
		int k = i + 1;
		int j = 0;
		while (k--)
		{
			lower_triangle += arr[i][j];
			j++;
		}
	}
	
	// Get sum of Upper Triangular Matrix elements:
	double upper_triangular = 0;
	int k = row;
	for (int i = 0; i < row; i++)
	{
		int tmp = k;
		int j = row - 1;
		while (tmp--)
		{
			upper_triangular += arr[i][j];
			j--;
		}
		k--;
	}
	cout << lower_triangle << endl;
	cout << upper_triangular << endl;
	
	return 0;
}
