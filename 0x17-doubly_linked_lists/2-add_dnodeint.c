#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
		dlistint_t *new_node = malloc(sizeof(dlistint_t));

		new_node->n = n;
		if (!(*head))
		{
			new_node->next = NULL;
			new_node->prev = NULL;
			*head = new_node;
		}
		else
		{
			new_node->next = *head;
			(*head)->prev = new_node;
			new_node->prev = NULL;
			*head = new_node;
		}
		return (*head);

}
