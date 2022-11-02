#include "lists.h"
/**
 * Reverse_listint - The function reverses the linked list
 *
 * @head: Head node of the linked lists
 *
 * Return: It returns the head node passed to the function
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
	
}
