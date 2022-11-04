#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: Pointer to the first node.
 * Return: Number of nodes.
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int i;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
