#include <stdarg.h>
#include <stdio.h>
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
	va_list ap;

	va_start(ap, n);

	int i, add, sum;

	for (i = 0; i < n; i++)
	{
		add = va_arg(ap, int);
		sum += add;
	}
	va_end(ap);
	return (sum);
}

