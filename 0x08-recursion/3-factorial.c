#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 *
 * @n : number.
 * Return : -1 if n is lower than 0, return factorial otherwise.
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
