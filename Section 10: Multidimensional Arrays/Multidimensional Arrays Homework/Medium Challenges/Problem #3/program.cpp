/*
Author: Karim Tarek Ibrahim
Date: 2/4/2024
*/
#include <iostream>
using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;

	int k;
	cin >> k;

	// starting cell (0,0)
	int i = 0, j = 0;
	while (k--)
	{
		int direction, steps;
		cin >> direction >> steps;

		// move UP:
		if (direction == 1)
		{
			for (int w = 1; w <= steps; w++)
			{
				if (i == 0)
					i = row - 1;
				else
					i--;
			}
		}

		// move RIGHT:
		else if (direction == 2)
		{
			for (int w = 1; w <= steps; w++)
			{
				if (j == col - 1)
					j = 0;
				else
					j++;
			}
		}

		// move DOWN:
		else if (direction == 3)
		{
			for (int w = 1; w <= steps; w++)
			{
				if (i == row - 1)
					i = 0;
				else
					i++;
			}
		}

		// move LEFT:
		else if (direction == 4)
		{
			for (int w = 1; w <= steps; w++)
			{
				if (j == 0)
					j = col - 1;
				else
					j--;
			}
		}

		// printing the current position:
		cout << "(" << i << "," << j << ")" << endl;
	}
	
	return 0;
}
