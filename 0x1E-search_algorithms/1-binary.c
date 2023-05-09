#include "search_algos.h"
void print_array(int array[], int size);
/**
 * binary_search - Function that searches for element in sorted array
 * @array: First parameter passed
 * @size: Second parameter
 * @value: Value to be searched for
 *
 * Return: It returns index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0; 
	int right = size - 1; 
	int mid;
	
	if (array == NULL)
		return (-1);
	print_array(array, size);
	while (left < right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
			right = mid - 1;
		else:
			return (mid);
	}
	return (-1);
}

void print_array(int array[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d, \n", array[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
	}
}
