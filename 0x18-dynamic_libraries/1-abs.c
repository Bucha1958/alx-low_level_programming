#include <stdio.h>
#include "main.h"

/**
 * _abs - Absolute function
 *
 * return
 *
 */
int _abs(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
	}
	else
	{
		n = n * -1;
		printf("%d\n", n);
	}
}
