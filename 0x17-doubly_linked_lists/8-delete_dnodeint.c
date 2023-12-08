#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deleting a node
 * @head: head of list
 * @index: position
 *
 * Description: del a node
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int nth = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp && nth < index)
	{
		tmp = tmp->next;
		nth++;
	}
	if (tmp == NULL)
		return (-1);
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
