#include "main.h"

/**
 * is_palindrome - Wrapper function to check for palindrome
 * @s : String
 * @i: integar pointing the beginning
 * @j: integar pointing the end.
 * Return : 1 if palindrome 0 if not palindrome
 */
int ispalindrome(char *s, int i, int j)
{
	if (i == j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	if (i < j)
		return (ispalindrome(s, i + 1, j - 1));
       return (1);	
}
/**
 * is_palindrome - Checks if string is a palindrome
 * @s : String
 * Return : 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (ispalindrome(s, 0, _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - Calculates the length of the string
 * @s : string
 * Return : The total length of the function
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
