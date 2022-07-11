#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int factorial(int n)
{
	if (n == NULL)
	{
		return (0);
	} else
	{
		return (n * factorial(n - 1));
	}
}
