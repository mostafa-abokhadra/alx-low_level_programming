#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
		unsigned long int i, flag = 0;
		hash_node_t *t = NULL;

		if (!ht || ht->size == 0)
			return;
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
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
		printf("}\n");
}
