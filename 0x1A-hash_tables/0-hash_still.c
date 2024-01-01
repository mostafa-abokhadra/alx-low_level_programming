#include "hash_tables.h"

/**
 * hash_table_create - creating a table
 * @size: size of table
 *
 * Description: just a hash table
 * Return: the hesh table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *table = malloc(sizeof(hash_table_t));

		if (!table)
			return (NULL);
		table->size = size;
		table->array = malloc(sizeof(hash_node_t) * size + 1);
		if (!table->array)
		{
			free(table);
			return (NULL);
		}
		return (table);
}
