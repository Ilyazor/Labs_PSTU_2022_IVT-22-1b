#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a[100];
	int n, c, t, m;

	cout << "Vvedite dlinu massiva" << endl;
	cin >> n;

	cout << "Massiv: ";
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Perevernutiy massiv: ";
	for (int i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	t = n % 2;
	m = n / 2;

	if (t != 0)
	{
		cout << endl;
		cout << "Ubrat' sredniy element massiva: ";
		for (int i = 0; i < m; i++)
		{
			cout << a[i] << " ";
		}
		for (int i = 0; i < m; i++)
		{
			cout << a[i + m + 1] << " ";
		}

	}
	cout << endl;

	if (t != 0)
	{
		cout << "Dobavit' 3 elementa [10]-2 v nachalo massiva: ";
		for (int i = 0; i < 3; i++)
		{
			cout << a[10] - 2 << " ";
		}
		for (int i = 0; i < m; i++)
		{
			cout << a[i] << " ";
		}
		for (int i = 0; i < m; i++)
		{
			cout << a[i + m + 1] << " ";
		}
	}
	return 0;
}