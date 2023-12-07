#include <stdlib.h>
#include "lists.h"
void free_dlistint(dlistint_t *head)
{
		dlistint_t *t = head;

		for (;t != NULL;)
		{
			head = head->next;
			free(t);
			t = head;
		}
}
