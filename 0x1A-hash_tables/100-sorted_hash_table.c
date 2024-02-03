#include "hash_tables.h"
#include "linked_list.h"

/**
 *
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
		shash_tabel_t *sht = NULL;
		unsigned long int i = 0;

		if (size == 0)
			return (NULL);
		sht = malloc(sizeof(shash_table_t));
		if (!sht)
			return (NULL);
		sht->array = malloc(sizeof(shash_node_t) * size);
		if (!sht->array)
		{
			free(sht);
			return (NULL);
		}
		sht->size = size;
		for (i = 0; i < size; i++)
			sht->array[i] = NULL;
		return (sht);
}

/**
 *
 *
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
		shash_node_t *new_node = NULL;
		unsigned long int index = 0;

		if (!ht || !key || !value || key[0] == '\0')
			return (0);
		new_node = malloc(sizeof(shash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		if (!new_node->key)
			return (0);
		new_node->value = strdup(value);
		if (!new_node->value)
			return (0);
		index = key_index((const unsigned char *)key, ht->size);
		if ()

}

/**
 *
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
}

/**
 *
 *
 *
 */
void shash_table_print(const shash_table_t *ht)
{
}

/**
 *
 *
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
}

/**
 *
 *
 */
void shash_table_delete(shash_table_t *ht)
{
}


