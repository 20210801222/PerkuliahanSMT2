#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


// Bubble Sort Ascending Function
void bubbleSwapping(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubbleSortAsc(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		int swaps = 0;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				bubbleSwapping(array[j], array[j + 1]);
				swaps = 1;
			}
		}
		if (!swaps)
		{
			break;
		}
	}
}

// Quick Sort Descending Function
void swap(int *array, int left, int right)
{
	int temp = array[left];
	array[left] = array[right];
	array[right] = temp;
}

int partition(int *array, int left, int right)
{
	int pivot = array[right];
	int leftPointer = left - 1;
	int rightPointer = right;

	for (;;)
	{
		while (array[++leftPointer] > pivot)
		{
		}
		while (rightPointer > 0 && array[--rightPointer] < pivot)
		{
		}
		if (leftPointer >= rightPointer)
		{
			break;
		}
		else
		{
			swap(array, leftPointer, rightPointer);
		}
	}

	swap(array, leftPointer, right);
	return leftPointer;
}

void quicksort(int *array, int left, int right)
{
	if (left < right)
	{
		int partitionPoint = partition(array, left, right);
		quicksort(array, left, partitionPoint - 1);
		quicksort(array, partitionPoint + 1, right);
	}
}

int main()
{

	int array[6] = {23, 10, 9, 12, 15, 20};
	int arrayLeng = sizeof(array) / sizeof(int);

	cout << " Array before sort:           ";
	for (int i = 0; i < arrayLeng; i++)
	{
		cout << "[" << array[i] << "]"
			 << " ";
	}

	cout << endl;

	bubbleSortAsc(array, arrayLeng);
	cout << " Array after bubble sort asc: ";
	for (int i = 0; i < arrayLeng; i++)
	{
		cout << "[" << array[i] << "]"
			 << " ";
	}

	cout << endl;

	quicksort(array, 0, arrayLeng - 1);
	cout << " Array after quick sort desc: ";
	for (int i = 0; i < arrayLeng; i++)
	{
		cout << "[" << array[i] << "]"
			 << " ";
	}

	cout << endl;
}