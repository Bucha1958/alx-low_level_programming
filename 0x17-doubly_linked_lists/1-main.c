#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
int main(void)
{
	dlistint_t *head;
	int n;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	n = sum_dlistint(head);
	printf("%d\n", n);


	return (EXIT_SUCCESS);
}
