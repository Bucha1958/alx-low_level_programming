#include <stdio.h>
#include "main.h"
/**
 * _memcpy - functions copy memory byte
 * @dest : pointer destination
 * @src : memory source
 * @n : number of times
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
