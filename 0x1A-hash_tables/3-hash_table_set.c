#include "hash_tables.h"

/**
 * hash_table_set - Function that add element to the hash_table
 *
 * @ht: hash_table
 * @key: key to add
 * @value: value to associate with the key
 * Return: 1 successful and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index, str_len;
  hash_node_t *container, *new;

  if (ht == NULL || !ht->size)
    return (0);
  index = key_index((const unsigned char *)key, ht->size);
  str_len = strlen(key);
  if (str_len == 0)
    return (0);
  container = ht->array[index];
  while (container)
  {
    if (strcmp(container->key, key) == 0)
    {
      free(container->value);
      container->value = strdup((char *)value);
      if (!container->value)
	return (0);
      return (1);
    }
    container = container->next;
  }
  new = malloc(sizeof(hash_node_t));
  if (new == NULL)
  {
    return (0);
  }
  new->key = strdup((char *)key);
  new->value = strdup((char *)value);
  new->next = ht->array[index];
  ht->array[index] = new;
  return (1);
}
	  
  
