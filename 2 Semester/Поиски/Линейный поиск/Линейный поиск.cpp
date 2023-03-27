#include <iostream>
#include <ctime>
using namespace std;

int lineSerach(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
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

	cout << "What number need to find: ";
	cin >> key;
	cout << endl;

	if (lineSerach(arr, key, size) == -1)
	{
		cout << "Found!" << endl;
	}

	else
	{
		cout << "Not found!: " << lineSerach(arr, key, size) + 1 << endl;
	}

	delete[] arr;
	return 0;
}