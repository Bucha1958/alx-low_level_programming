#include "hash_table.h"

/**
 * *hash_table_create - The function create a new hash table
 * @size: Parameter that gives you the size of the hash table
 * Return: a pointer to a created hash table 
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	if (size > 0)
	{
		newTable = malloc(sizeof(hash_table_t));
		if (newTable == NULL)
		{
			return (NULL);
		}
		newTable->size = size;
		newTable->array = malloc(sizeof(hash_node_t *) * size);
		if (newTable->array == NULL)
		{
			free(newTable);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			newTable->array[i] = NULL;
		return (newTable);
	}
	return (NULL);
}
