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
		listint_t *t = NULL, *th = NULL;

		while ((*head))
		{
			t = (*head)->next;
			(*head)->next = th;
			th = (*head);
			(*head) = t;
		}
		*head = th;
		return (*head);

}
