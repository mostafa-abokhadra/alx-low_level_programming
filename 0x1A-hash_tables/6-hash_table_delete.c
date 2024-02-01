#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
		unsigned long int i;
		hash_node_t *t = NULL;
		hash_node_t *d = NULL;

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
