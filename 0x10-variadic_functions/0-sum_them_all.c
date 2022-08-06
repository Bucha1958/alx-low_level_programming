#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function that takes indefinite number of variable arguments
 *
 * @n : The last fixed argument parameter
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list argSum;

	if (n == 0)
		return (0);
	va_start(argSum, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(argSum, int);
	va_end(argSum);
	return (sum);
}

