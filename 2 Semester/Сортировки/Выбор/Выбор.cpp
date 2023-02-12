#include<iostream>
using namespace std;

int main()
{
	int m[] = { 41, 42, 66, 87, 86, 38, 77, 84, 45, 35, 22 };
	int size = 11;

	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i; j < size;j++)
		{
			if (m[j] < m[min])
				min = j;
		}
		int tmp = m[min];
		m[min] = m[i];
		m[i] = tmp;
	}
	for (int i = 0; i < size; i++)
	{
		cout << m[i] << " ";
	}
	return 0;
}