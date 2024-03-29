#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * _puts_recursion - function that print a string
 *
 * @s : operand s
 */
void _puts_recursion(char *s);
/**
 * _strlen_recursion -function that print the length of a string
 *
 * @s : operand s
 * Return : it returns 1
 */
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int isqrt(int n, int i);
int is_prime(int n, int i);
#endif

