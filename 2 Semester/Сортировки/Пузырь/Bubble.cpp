#include<iostream>
using namespace std;

int main()
{
	int m[] = { 41, 42, 66, 87, 86, 38, 77, 84, 45, 35, 22 };
	int size = 11;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (m[j] > m[j+1])
			{
				int tmp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = tmp;
			}

		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << m[i] << " ";
	}
	return 0;
}