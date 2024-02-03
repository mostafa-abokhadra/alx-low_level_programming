#include "hash_tables.h"

/**
 *
 *
 *
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
 *
 *
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
		shash_node_t *new_node = NULL, *t = NULL;
		unsigned long int index = 0, i = 0, ascii_sum = 0;
		unsigned long int new_node_ascii_sum = 0;

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
		else
		{
			for (i = 0; new_node->key[i] != '\0'; i++)
				new_node_ascii_sum += (int)new_node->key[i];

			t = ht->array[index];
			while (t != NULL)
			{
				for (i = 0; t->key[i] != '\0'; i++)
					ascii_sum += (int)key[i];

				if (new_node_ascii_sum <= ascii_sum)
				{
					if (t->next == NULL && ht->array[index] == t)
					{
						/*push_front()*/
						new_node->snext = t;
						new_node->sprev = NULL;
						t->snext = NULL;
						t->sprev = new_node;
						ht->array[index] = new_node;
						return (1);
					}
					/*add_befor()*/
					new_node->snext = t;
					new_node->sprev = t->sprev;
					t->sprev = new_node;
					t->sprev = new_node;
					return (1);
				}
				if (t->snext == NULL)
				{
					/*add_end()*/
					new_node->snext = NULL;
					new_node->sprev = t;
					t->snext = new_node;
					return (1);
				}
				t = t->snext;
			}
		}
	return (0);
}
/**
 *
 *
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
 *
 *
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
 *
 *
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
 *
 */
void shash_table_delete(shash_table_t *ht)
{
		shash_node_t *t = NULL, *temp = NULL;
		unsigned long int i = 0;
		
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
						temp = t;
						t = t->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}
			}
			free(ht->array);
			free(ht);
		}
}

