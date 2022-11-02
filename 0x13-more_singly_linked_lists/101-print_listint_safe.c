#include "lists.h"
/**
 * print_listint_safe - The function that prints linked lists 
 *
 * @head: The first argument
 *
 * Return : return the count
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	int i;

	for (i = 0; head != NULL; i++)
	{
		printf("[0x%x] %d\n", head->n, head->n);
		head = head->next;
	}
	return (i);
}
