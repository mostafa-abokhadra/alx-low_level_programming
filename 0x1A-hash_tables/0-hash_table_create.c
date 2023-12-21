#include "hash_tables.h"
#include "stdlib.h"

/**
 * hash_table_create - create a hash table
 * @size: size of table
 * description: creating a table
 * Return: hash table or NULl
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *table = malloc(sizeof(hash_table_t));
		
		if (!table)
			return (NULL);
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (!table->array)
		{
			free(table);
			return (NULL);
		}
		table->size = size;
		return (table);
}
