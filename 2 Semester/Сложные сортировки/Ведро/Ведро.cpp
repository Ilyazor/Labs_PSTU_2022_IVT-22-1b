#include <iostream>
using namespace std;

void bucketSort(int arr[], int n) {
	const int NUM_BUCKETS = 10;
	const int ARRAY_SIZE = 10;

	int buckets[NUM_BUCKETS][ARRAY_SIZE];

	int bucketSizes[NUM_BUCKETS] = { 0 };

	for (int i = 0; i < n; i++) 
	{
		int bucketIndex = arr[i] / NUM_BUCKETS;
		buckets[bucketIndex][bucketSizes[bucketIndex]] = arr[i];
		bucketSizes[bucketIndex]++;
	}

	for (int i = 0; i < NUM_BUCKETS; i++) 
	{
		for (int j = 1; j < bucketSizes[i]; j++) 
		{
			int temp = buckets[i][j];
			int k = j - 1;
			while (k >= 0 && buckets[i][k] > temp) 
			{
				buckets[i][k + 1] = buckets[i][k];
				k--;
			}
			buckets[i][k + 1] = temp;
		}
	}

	int index = 0;
	for (int i = 0; i < NUM_BUCKETS; i++) 
	{
		for (int j = 0; j < bucketSizes[i]; j++) 
		{
			arr[index++] = buckets[i][j];
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
	bucketSort(arr, size);
	cout << "Otsortirovanniy Massiv: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
