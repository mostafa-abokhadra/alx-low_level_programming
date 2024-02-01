#include "hash_tables.h"

/**
 * hash_table_create - creating hash table
 *
 * @size: size of table
 *
 * Return: address of the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *table;
		unsigned long int i;

		if (size <= 0)
			return (NULL);
		table = malloc(sizeof(hash_table_t));
		if (!table)
			return (NULL);
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (!table->array)
		{
			free(table);
			return (NULL);
		}
		for (i = 0; i < table->size; i++)
			table->array[i] = NULL;
		return (table);
}
