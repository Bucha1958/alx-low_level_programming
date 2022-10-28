#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to a head
 * @idx: index of the list where the new node should be added
 * @n: element to insert
 * Return: address of the new node, NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	int i = 1;
	
	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;	
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
}
