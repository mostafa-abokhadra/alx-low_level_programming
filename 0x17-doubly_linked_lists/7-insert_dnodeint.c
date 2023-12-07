#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting a node
 * @h: head of list
 * @idx: position
 * @n: node value
 *
 * Description: adding some nodes
 * Return: address of added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
		unsigned int step = 0;
		dlistint_t *t = *h, *new_node = NULL;

		if (idx == 0)
			return (add_dnodeint(h, n));
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		for (; step < idx - 1 && t->next != NULL; t = t->next, step++)
		{}
		if (step == idx - 1)
		{
			new_node->next = t->next;
			t->next = new_node;
			new_node->prev = t;
			new_node->next->prev = new_node;
			return (new_node);
		}
		else
		{
			/*free(new_node);*/
			return (NULL);
		}
}
