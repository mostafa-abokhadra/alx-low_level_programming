#include "hash_tables.h"

/**
 * hash_table_get - getting value of key
 *
 * @ht: the table
 * @key: key to retrieve it's value
 *
 * Return: the value or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
		hash_node_t *t = NULL;
		unsigned long int idx;

		if (!ht || !ht->array)
			return (NULL);
		idx = key_index((const unsigned char *)key, ht->size);
		if (!ht->array[idx])
			return (NULL);
		t = ht->array[idx];
		while (t != NULL)
		{
			if (strcmp(key, t->key) == 0)
				return (t->value);
			t = t->next;
		}
		return (NULL);
}
