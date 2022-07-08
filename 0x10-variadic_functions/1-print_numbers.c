#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Functions that print numbers
 * @separator : First argument
 * @n : Second argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i, number;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > (n - 1) && separator != NULL)
		{
			printf("%s\n", separator)
		}
		number = va_arg(args, int);
		printf("%d\n", number);
	}
	va_end(args);
	printf("\n");
}
