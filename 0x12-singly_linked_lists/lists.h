#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
#endif
