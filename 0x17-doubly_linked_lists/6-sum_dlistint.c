#include "lists.h"
/**
 * sum_dlistint - The function calculates sum of all data of a dlistint_t
 * 
 * @head: The argument passed to the function
 *
 * Return: It returns the sum of all the data in linked lists
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
