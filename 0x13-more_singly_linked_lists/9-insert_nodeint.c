#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	int i = 0;
	
	temp = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (i != idx)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
