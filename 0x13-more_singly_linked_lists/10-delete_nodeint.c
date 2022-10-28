#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: linked list at head
 * @index: index of deleted node
 * Return: boolean
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	int i;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		i = 0;
		while (temp != NULL && i < index - 1)
		{
			temp = temp->next;
			i++;
		}
		if (i != index - 1)
			return (-1);
		node = temp->next;
		temp->next = temp->next->next;
		free(node);
		return (1);
	}
}
