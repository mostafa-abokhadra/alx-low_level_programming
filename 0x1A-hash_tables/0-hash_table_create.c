#include "hash_tables.h"
#include "stdlib.h"

/**
 * hash_table_create - create a hash table
 * @size: size of table
 *
 * Return: hash table or NULl
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *array = malloc(sizeof(hash_table_t) * size + 1);
		
		if (!array)
			return (NULL);
		return (array);
}
