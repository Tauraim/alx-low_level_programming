#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size : sizze to the hash table
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = collac(1, sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	{
		free(table);
		return (NULL);
	}
	return (table);
}
