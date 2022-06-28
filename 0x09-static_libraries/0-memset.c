#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s : array to set
 * @b : value to set it as
 * @n : how many times it is going to print
 * Return : value of char s is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
