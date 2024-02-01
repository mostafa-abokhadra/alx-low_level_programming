#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
		unsigned long int idx;
		hash_node_t *new_node = NULL;

		if (!ht || !key || !value || key[0] == '\0')
			return (0);
		idx = key_index((const unsigned char *)key, ht->size);
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->value = strdup(value);
		if (!new_node->value)
		{
			free(new_node);
			return (0);
		}
		new_node->key = strdup(key);
		if (!new_node->key)
		{
			free(new_node->value);
			free(new_node);
			return (0);
		}
		if (ht->array[idx] == NULL)
		{
			new_node->next = NULL;
			ht->array[idx] = new_node;
		}
		else
		{
			new_node->next = ht->array[idx];
			ht->array[idx] = new_node;
		}
		return (1);
}
