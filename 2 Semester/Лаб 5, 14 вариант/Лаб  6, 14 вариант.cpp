#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{

	const int n = 15;
	int a[n][n], max, proizv = 1;
	bool flag = false;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 30;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	max = a[0][0];
	for (int i = 1; i < n; i++)
	{
		if (a[i][i] > max)
		{
			max = a[i][i];
		}
			
	}
		
	int j = n - 1;

	for (int i = 0; i < n; i++, j--)
	{
		if (a[i][j] > max)
		{
			max = a[i][j];
		}
	}
	cout << "Naibolshiy element diagonaley: " << max << endl;

	for (int i = 0; i < n; i++)
	{
		if (a[0][i] > max)
		{
			flag = true;
			cout << "Proizvedenie elementov " << i + 1 << " stobtsa: ";
			for (int j = 0; j < n; j++)
			{
				proizv *= a[j][i];
			}
			cout << proizv << endl;
			proizv = 1;
		}
	}

	if (not flag)
		cout << "Uslovie ne vipolneno " << endl;
	return 0;
}
	