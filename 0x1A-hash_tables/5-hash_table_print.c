#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Function that prints the hash_table
 *
 * @ht: hash_table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
  unsigned int i;
  hash_node_t *container;
  int flag = 0;

  if (!ht)
    return;
  if (ht->size <= 0)
    printf("{}");
  printf("{");
  for (i = 0; i < ht->size; i++)
  {
    container = ht->array[i];
    while (container != NULL)
    {
      if (flag == 0)
	flag = 1;
      else
	printf(", ");
      printf("%s : %s", container->key, container->value);
      container = container->next;
    }
  }
  printf("}\n");
}
  
