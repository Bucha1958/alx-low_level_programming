#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (value);
	tmp = *head;
	value = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (value);
}
