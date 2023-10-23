#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - pop elem
  * @head: header of list
  *
  * Description: poping head
  * Return: head data
  */
int pop_listint(listint_t **head)
{
		listint_t *t;
		int tint;

		if ((*head) == NULL)
			return (0);

		t = (*head);
		(*head) = (*head)->next;
		tint = t->n;
		free(t);
		return (tint);
}

