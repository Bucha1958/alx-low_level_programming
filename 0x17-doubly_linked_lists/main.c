#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
	dlistint_t *new;
	dlistint_t *head;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	new->n = 9;
	if (new == NULL)
	{
		dprintf(2, "Error: allocate memory");
		return (EXIT_FAILURE);
	}
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	return (EXIT_SUCCESS);
}
