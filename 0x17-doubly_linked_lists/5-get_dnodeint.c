#include "lists.h"
/**
 * get_dnodeint_at_index - inserts node at index
 * @head: head address of linked list
 * @index: index of list to go
 * Return: address of new node inserted or NULL
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	temp = head;
	if (head == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (temp != NULL && count != index)
	{
		temp = temp->next;
		count++;
	}
	if (index == count)
		return (temp);
	else
		return (NULL);
}
