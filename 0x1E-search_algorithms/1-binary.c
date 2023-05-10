#include "search_algos.h"
void print_array(int array[], size_t start, size_t stop);
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
	size_t left = 0; 
	size_t right = size - 1; 
	size_t mid;
	
	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_array(array, left, right);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else if (array[mid] == value)
			return mid;
	}
	return (-1);
	
}

void print_array(int array[], size_t start, size_t stop)
{
	size_t i;
	
	for (i = start; i <= stop; i++)
	{
		printf("%u", array[i]);
		if (i < stop)
		{
			printf(", ");
		}
	}
	printf("\n");
}
