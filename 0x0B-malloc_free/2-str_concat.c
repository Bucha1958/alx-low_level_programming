#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates Strings
 * @s1: String 1
 * @s2 : String 2
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int b;
	char *s;

	for (i = 0; s1 && s1[i]; i++)
	{}
	for (b = 0; s2 && s2[b]; b++)
	{}
	s = malloc((i + b + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1 && s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (b = 0; s2 && s2[b]; b++)
	{
		s[i] = s2[b];
		i++;
	}
	s[i] = '\0';
	return (s);
}
