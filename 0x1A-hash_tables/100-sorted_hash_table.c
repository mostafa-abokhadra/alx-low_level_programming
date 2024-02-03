#include "hash_tables.h"

/**
 * shash_table_create - creating sorted table
 *
 * @size: size of table
 *
 * Return: new_table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
		shash_table_t *ht = NULL;
		unsigned long int i = 0;

		if (size <= 0)
			return (NULL);
		ht = malloc(sizeof(shash_table_t));
		if (!ht)
			return (NULL);
		ht->array = malloc(sizeof(shash_node_t) * size);
		if (!ht->array)
			return (NULL);
		ht->size = size;
		ht->shead = ht->array[0];
		ht->stail = ht->array[size - 1];
		for (i = 0; i < size; i++)
			ht->array[i] = NULL;
		return (ht);
}

/**
 * shash_table_set - setting values
 *
 * @ht: the table
 * @key: key value
 * @value: value
 *
 * Return: 1 on success, 0 on fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
		unsigned long int index = 0;
		shash_node_t *new_node = NULL;

		if (!ht || !key || !value || key[0] == '\0')
			return (0);
		new_node = malloc(sizeof(new_node));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		if (!new_node->key)
		{
			free(new_node);
			return (0);
		}
		new_node->value = strdup(value);
		if (!new_node->value)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index] == NULL)
		{
			new_node->next = NULL;
			new_node->sprev = NULL;
			ht->array[index] = new_node;
			return (1);
		}
		return (0);
}
/**
 * shash_table_get - getting a key value
 *
 * @ht: the table
 * @key: key of value
 *
 * Return: the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
		unsigned long int i = 0;
		shash_node_t *t = NULL;

		if (!ht || !key)
			return (NULL);
		for (i = 0 ; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				t = ht->array[i];
				while (t != NULL)
				{
					if (strcmp(t->key, key) == 0)
						return (t->value);
					t = t->next;
				}
			}
		}
		return (NULL);
}


/**
 * shash_table_print - printing table
 *
 * @ht: table to be printed
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
		shash_node_t *t = NULL;
		unsigned long int i = 0, flag = 0;

		if (!ht || !ht->array)
			return;
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (flag == 1)
					printf(", ");
				t = ht->array[i];
				while (t != NULL)
				{
					printf("'%s': ", t->key);
					printf("'%s'", t->value);
					t = t->next;
					if (t != NULL)
						printf(", ");
				}
				flag = 1;
			}
		}
		printf("}\n");
}

/**
 * shash_table_print_rev - print reversed
 *
 * @ht: table to be printed
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
		shash_node_t *t = NULL;
		long int i = ht->size - 1, flag = 0;

		printf("{");
		while (i >= 0)
		{
			if (ht->array[i] != NULL)
			{
				if (flag == 1)
					printf(", ");
				t = ht->array[i];
				while (t != NULL)
				{
					printf("'%s': ", t->key);
					printf("'%s'", t->value);
					t = t->next;
					if (t != NULL)
						printf(", ");
				}
				flag = 1;
			}
			i--;
		}
		printf("}\n");
}

/**
 * shash_table_delete - deallocate memmory of hash table
 *
 * @ht: table to be deleted
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
		unsigned long int i;
		shash_node_t *t = NULL;
		shash_node_t *d = NULL;

		if (!ht)
			return;
		else if (!ht->array)
			free(ht);
		else
		{
			for (i = 0; i < ht->size; i++)
			{
				if (ht->array[i] != NULL)
				{
					t = ht->array[i];
					while (t != NULL)
					{
						d = t;
						t = t->next;
						free(d->key);
						free(d->value);
						free(d);
					}
				}
			}
			free(ht->array);
			free(ht);
		}
		return;
}
