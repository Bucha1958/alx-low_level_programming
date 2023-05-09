#include "search_algos.h"
#include <stdio.h>
#include <string.h>

/**
 * linear_search - Search function
 *
 * @array: first parameter that will contain elements
 * @size: Second parameter
 * @value: Third parameter
 * Return : The first index where value is located, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
