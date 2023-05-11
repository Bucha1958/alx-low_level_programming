#include "search_algos.h"
#include <math.h>
void print_array(int start, int end);
/**
 * jump_search - searches for a value in sorted array
 *
 * @array: First parameter 
 * @size: The second parameter which is the size of the array
 * @value: The target value
 *
 *  Return : The function will return the index of the element found or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int start = 0;
	int jump = (int) sqrt(size);
	int sub1, sub2;

	if (array == NULL)
	{	
		return (-1);
	}
	while (array[jump] < value && start < size)
	{
		start += jump;
		jump += jump;
		
		if (jump >= size)
		{
			break;
		}
		print_array(start, jump);
	}
	sub1 = start;
	sub2 = jump >= size ? size - 1 : jump;

	while (sub1 <= sub2)
	{
		
		if (sub1 == value)
		{
			print_array(sub1, sub2);
			return (sub1);
		}
		sub1++;
	}
	return (-1);
}

void print_array(int start, int end)
{
	char *message = "Value checked array";
	
	printf("%s[%d] = [%d]\n", message, start, start);
	printf("%s[%d] = [%d]\n", message, end, end);
}
