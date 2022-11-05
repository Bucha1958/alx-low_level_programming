#include "lists.h"
/**
 * free_dlistint - frees list
 *
 * @head: head of list to free
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	while (head != NULL)
	{
		temp = head;
		free(temp);
		temp = temp->next;	
	}
}
