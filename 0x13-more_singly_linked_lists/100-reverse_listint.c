#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint - reversing linked list
  * @head: head of list
  *
  * Description: using one loop and 2 var
  * Return: first node of reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
		listint_t *t, *th;

		if (*head == NULL)
			return (NULL);

		th = (*head);
		while ((*head)->next != NULL)
		{
			t = (*head);
			(*head) = (*head)->next;
			if ((*head)->next == NULL)
				break;
			(*head)->next = t;
		}
		(*head)->next = t;
		th->next = NULL;
		return (*head);

}
