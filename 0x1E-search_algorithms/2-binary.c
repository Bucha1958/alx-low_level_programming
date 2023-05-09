#include "search_algos.h"
void print_array(int *array, size_t start, size_t end);



int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return -1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_array(array, left, right);
		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

void print_array(int *array, size_t start, size_t end)
{
	for (size_t i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

