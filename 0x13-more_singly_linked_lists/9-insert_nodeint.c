#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index
 * @head: linked list
 * @idx: index of node
 * @n: value of head
 * Return: newly added node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));
	int i;

	if (new_node == NULL)
		return (NULL);
	temp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		i = 0;
		while (temp != NULL && i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		if (i != idx - 1)
			return (NULL);
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
}
