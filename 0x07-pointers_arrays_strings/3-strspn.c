#include "main.h"
#include <stdio.h>
/**
 * _strspn - Function that get length of a substring
 * @s : First argument
 * @accept : Second argument
 * Return : Length of the substring
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (i);
	}
	return (i);
}
