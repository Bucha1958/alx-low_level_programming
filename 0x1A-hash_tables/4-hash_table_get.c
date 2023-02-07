#include "hash_tables.h"
#include <stdio.h>

/**
 * *hash_table_get - Retrieves a value associated with a key
 * @ht: hash_table to look into
 * @key: key you are looking for
 *
 * Return: The key you are looking for or NULL 
 * if the key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index;
  hash_node_t *container;

  if (!ht || !strlen(key))
    return (NULL);
  index = key_index((const unsigned char *)key, ht->size);
  container = ht->array[index];
  while (container)
  {
    if (strcmp(container->key, key) == 0)
    {
      return (container->value);
    }
    container = container->next;
  }
  return (NULL);
}
  
  
