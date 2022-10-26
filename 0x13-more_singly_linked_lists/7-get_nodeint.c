#include <stdlib.h>
#include <stdio.h>
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
	
	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	if (index != i)
		return (NULL);

	return (head);
	
}
