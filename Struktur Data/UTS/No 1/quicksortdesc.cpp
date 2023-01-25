#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

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