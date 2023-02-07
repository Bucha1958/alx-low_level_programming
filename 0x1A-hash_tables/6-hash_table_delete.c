#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Function that delete a hash table
 *
 * @ht: hash_table
 *
 * Return: It returns nothing
 */
void hash_table_delete(hash_table_t *ht)
{
  unsigned int i;
  hash_node_t *temp, *temp2;

  for (i = 0; i < ht->size; i++)
  {
    temp = ht->array[i];
    if (temp != NULL)
    {
      temp2 = temp->next;
      free(temp->key);
      free(temp->value);
      free(temp);
      temp = temp2;
    }
  }
  free(ht->array);
  free(ht);
}
