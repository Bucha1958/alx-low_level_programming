#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main()
{
	listint_t *head;
	int i;
	//listint_t *head2;
	listint_t *node;

	head = NULL;

	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	node = get_nodeint_at_index(head, 4);
	printf("\t%d\n", node);
	i = pop_listint(&head);
	printf("--------------------\n");
	printf("\t - %d\n", i);
	print_listint(head);
	free_listint2(&head);
	printf("%p\n", (void *)head);
	/**head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);*/
	return (0);
}
