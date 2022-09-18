#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n);
/**
 *  _memcpy - function that copies memory byte n from memory area src to memory area dest
 * @dest : memory area dest
 * @src : memory area src
 * @n : n amount of times
 */
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
int _putchar(char c);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, __attribute__((unused)) char *to);

#endif
#define NULL ((char *)0)
