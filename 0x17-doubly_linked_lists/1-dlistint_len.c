#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
