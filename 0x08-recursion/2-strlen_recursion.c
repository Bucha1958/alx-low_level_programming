#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - function that print the length of string
 * @s : recursion string
 *
 * Returns : always return 1
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
