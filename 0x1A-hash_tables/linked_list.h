#ifndef LINKED
#define LINKED

#include "hash_tables.h"

typedef struct list
{
		shash_node_t *ptr;
		struct list *next;
} node;

node *add_front(node *head, shash_node_t *ptr)
{
		node *new_node = malloc(sizeof(node));

		if (!new_node)
			return (NULL);
		new_node->ptr = ptr;
		new_node->next = NULL;
		if (head == NULL)
			head = new_node;
		else
		{
			printf("why\n");
			new_node->next = head;
			head = new_node;
		}
		return (head);
}
node *add_end(node *head, shash_node_t *ptr)
{
		node *new_node = malloc(sizeof(node));
		node *temp = head;

		if (!new_node)
			return (NULL);
		if (head == NULL)
			return (add_front(head, ptr));
		new_node->ptr = ptr;
		new_node->next = NULL;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		return (head);
}
node *add_before(node *head, char *key, shash_node_t *ptr)
{
		node *new_node;
		node *temp = head;

		if (head == NULL)
		{
			printf("first\n");
			return (add_front(head, ptr));
		}
		new_node = malloc(sizeof(node));
		if (!new_node)
			return (NULL);
		while (strcmp(temp->ptr->key, key) != 0)
			temp = temp->next;
		if (temp == head)
			return (add_front(head, ptr));
		new_node->next = temp->next;
		new_node->ptr = ptr;
		temp->next = new_node;
		return (head);
}
void print(node *head)
{
		node *t = head;

		if (t == NULL)
			return;
		for(; t != NULL; t = t->next)
			printf("%s ", t->ptr->key);
		printf("\n");
}

#endif
