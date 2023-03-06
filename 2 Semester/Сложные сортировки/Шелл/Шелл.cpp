#include <iostream>
using namespace std;

void shellSort(int arr[], int size) 
{
	int step, tmp, i, j;
	for (step = size / 2; step > 0; step /= 2)
	{
		for (i = step; i < size; i++)
		{
			tmp = arr[i];
			for (j = i; j >= step; j -= step)
			{
				if (tmp < arr[j - step])
					arr[j] = arr[j - step];
				else
					return;
			}
			arr[j] = tmp;
		}
	}
}

int main()
{
	int size;
	cout << "Vvedite dlinu massiva: ";
	cin >> size;
	int arr[100];
	cout << "Massiv: " << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	shellSort(arr, size);
	cout << "Otsortirovanniy Massiv: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
