#include "hash_tables.h"
#include "linked_list.h"

node *head = NULL, *t = NULL;

/**
 *
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
		shash_table_t *sht = NULL;
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
		sht->shead = sht->array[0];
		sht->stail = sht->array[size - 1];
		return (sht);
}

/**
 *
 *
 *
 */
int asci(char *key)
{
		unsigned long int i = 0;
		int sumy = 0;

		for (i = 0; key[i] != '\0'; i++)
		{
			sumy += (int)key[i];
		}
		return (sumy);
}
/**
 *
 *
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
		shash_node_t *new_node = NULL;
		unsigned long int index = 0;
		int i = 0;
		int node_asci = 0;

		if (!ht || !key || !value || key[0] == '\0')
			return (0);
		new_node = malloc(sizeof(shash_node_t));
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
		new_node->sprev = NULL;
		new_node->snext = NULL;
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index] == NULL && size == 0)
		{
			ht->array[index] = new_node;
			head = add_front(head, ht->array[index]);
			return (1);
		}
		else if (ht->array[index] == NULL && size == 1)
		{
			ht->array[index] = new_node;
			if (asci(new_node->key) < asci(head->ptr->key))
				head = add_front(head, ht->array[index]);
			else
				head = add_end(head, ht->array[index]);
			return (1);
		}
		else if (ht->array[index] == NULL && size > 1)
		{
			ht->array[index] = new_node;
			t = head;
			node_asci = asci(ht->array[index]->key);
			if (node_asci < asci(head->ptr->key))
				head = add_front(head, ht->array[index]);
			else
			{
				for (i = 0; t != NULL; i++, t = t->next)
				{
					if (t->next != NULL && node_asci < asci(t->next->ptr->key))
					{
						head = add_before(head, t, ht->array[index]);
						break;
					}
					if (t->next == NULL)
					{
						head = add_end(head, ht->array[index]);
						break;
					}
				}
			}
		}
		else if (ht->array[index] != NULL)
		{
			new_node->snext = ht->array[index];
			ht->array[index] = new_node;
		}
		return (1);
}

/**
 *
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
		shash_node_t *t = NULL;
		unsigned long int i = 0;

		if (!ht || !key)
			return (NULL);
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				t = ht->array[i];
				if (strcmp(key,t->key) == 0)
					return (t->value);
			}
		}
		return (NULL);
}


/**
 *
 *
 *
 */
void shash_table_print(const shash_table_t *ht)
{
		shash_node_t *t2 = NULL;
		int flag = 0;
		node *tt = head;

		if (!ht)
			return;
		if (!ht->array)
			return;
		printf("{");
		while(tt != NULL)
		{
			t2 = tt->ptr;
			while (t2 != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': ", t2->key);
				printf("'%s'", t2->value);
				if (t2->snext != NULL)
					printf(", ");
				t2 = t2->snext;
			}
			tt = tt->next;
			flag = 1;
		}
		printf("}\n");

}

void print_rev(node *tt)
{
		if (tt == NULL)
		{
			printf("{");
			return;
		}
		print_rev(tt->next);
		printf("'%s': ", tt->ptr->key);
		printf("'%s'", tt->ptr->value);
		if (tt != head)
			printf(", ");
		if (tt == head)
			printf("}\n");
}
/**
 *
 *
 *
 */

void shash_table_print_rev(const __attribute__((unused))shash_table_t *ht)
{
		node* tt = head;
		print_rev(tt);
}

void free_linked(node *head)
{
		node *t = head, *t2;

		if (!head)
			return;
		while (t != NULL)
		{
			t2 = t;
			t = t->next;
			free(t2);
		}
}
/**
 *
 *
 */
void shash_table_delete(shash_table_t *ht)
{
		shash_node_t *ts = NULL, *del;
		unsigned long int i = 0;

		if (!ht)
			return;
		if (!ht->array)
		{
			free(ht);
			return;
		}
		for (i = 0 ;i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				ts = ht->array[i];
				while (ts != NULL)
				{
					del = ts;
					ts = ts->next;
					free(del->key);
					free(del->value);
					free(del);
				}
			}
		}
		free(ht->array);
		free(ht);
		free_linked(head);
}


