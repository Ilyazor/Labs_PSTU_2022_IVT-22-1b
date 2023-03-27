#include <iostream>
#include <ctime>
using namespace std;

void* bubbleSort(int* arr, int size)
{
	int tmp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	return arr;
}

int interpolSerach(int* arr, int size, int key)
{
	int left = 0;
	int right = size;
	int mid = 0;
	bool found = false;

	while ((left <= right) && found != true)
	{
		mid = left + ((key - arr[left]) + (right - left)) / (arr[right] - arr[left]);
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid + 1;
		else 
			found = true;
	}
	if (arr[left] == key)
		return left;
	else if (arr[right] == key)
		return right;

		return -1;
}


int main()
{

	int size, key;

	cout << "How many numbers: ";
	cin >> size;

	int* arr = new int[size];

	cout << "Array: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Sorted array: ";
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "What number need to find: ";
	cin >> key;
	cout << endl;

	if (interpolSerach(arr, key, size) == -1)
	{
		cout << "Found!" << endl;
	}

	else
	{
		cout << "Not found!: " << interpolSerach(arr, key, size) + 1 << endl;
	}

	delete[] arr;
	return 0;
}