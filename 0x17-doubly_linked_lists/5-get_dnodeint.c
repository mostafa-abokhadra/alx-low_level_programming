#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - getting node
 * @head: head of list
 * @index: index of wanted node
 *
 * Description: getting a node
 * Return: address of wanted node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
		unsigned int pos = 0;
		dlistint_t *t = head;

		if (!head)
			return (NULL);
		for (; t != NULL; t = t->next, pos++)
			if (pos == index)
				return (t);
		return (NULL);
}
