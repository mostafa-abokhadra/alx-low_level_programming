#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adding node at end
 * @head: head of list
 * @n: value of new node
 *
 * Description: add at end
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		dlistint_t *new_node = malloc(sizeof(dlistint_t)), *t = *(head);

		if (!new_node)
			return (NULL);
		new_node->n = n;
		if (!(*head))
		{
			new_node->next = NULL;
			new_node->prev = NULL;
			*head = new_node;
		}
		else
		{
			while (t->next != NULL)
				t = t->next;
			t->next = new_node;
			new_node->prev = t;
			new_node->next = NULL;
		}
		return (new_node);
}
