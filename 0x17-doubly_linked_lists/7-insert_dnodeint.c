#include "lists.h"
/**
 * *insert_dnodeint_at_index - Add a new node at the index 
 * @h: pointer to the first element.
 * @idx: index where new node should be added.
 * @n: data to be added.
 * Return: address of new node or NULL if it failed
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int count;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new_node;
			return (new_node);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	count = 1;
	while (temp != NULL && count != idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}    
