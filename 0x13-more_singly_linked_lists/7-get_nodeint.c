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

	for (i = 0; head, i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head->n);
}
