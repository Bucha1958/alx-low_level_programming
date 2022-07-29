#include <stdio.h>
#include "main.h"
#include <time.h>
/**
 * main - The function that genrate random numbers
 *
 * Return : Always 0
 */
int main(void)
	
{
	int sum;
	char c;
	
	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
