#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n) of linked list
 *
 * @head: pointer to head.
 *
 * Return: sum of all data(n) of a linked list
 *
 */

int sum_listint(listint_t *head)
{
	
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

