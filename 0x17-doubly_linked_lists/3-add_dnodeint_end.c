#include "lists.h"
/**
 * *add_dnodeint_end - Add node at the end of the link.
 *
 * @*head: pointer pointer to the head node.
 * @n: number attached to the nodes
 * Returns: The new node;
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	
	if (head == NULL)
		return NULL;
	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node-> next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
