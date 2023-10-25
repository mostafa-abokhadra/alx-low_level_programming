#include "lists.h"
#include <stdio.h>

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
