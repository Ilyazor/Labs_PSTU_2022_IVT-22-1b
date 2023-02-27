#include <iostream>
using namespace std;

void quickSort(int* arr, int first, int last)
{
	if (first < last)
	{
		int left = first;
		int right = last;
		int mid = arr[(left + right) / 2];
		do
		{
			while (arr[left] < mid)
			{
				left++;
			}
			while (arr[right] > mid)
			{
				right--;
			}
			if (left <= right)
			{
				int tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;
				left++;
				right--;
			}
		} while (left < right);
		quickSort(arr, first, right);
		quickSort(arr, left, last);
	}
	return;
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
	quickSort(arr, 0, size - 1);
	cout << "Otsortirovanniy Massiv: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}