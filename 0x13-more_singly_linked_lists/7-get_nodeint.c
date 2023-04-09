#include "lists.h"

/**
 * get_nodeint_at_index - Get node index
 * @head: head
 * @index: index to get
 * Return: head
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *node;
	
	node = head;
	for (i = 0; node != NULL; i++)
	{
		if (index == i)
			return (node->n);
		node = node->next;
	}
	if (index != i)
		return (NULL);
	
}
