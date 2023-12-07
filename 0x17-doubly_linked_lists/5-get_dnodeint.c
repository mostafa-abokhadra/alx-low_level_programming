#include <stdlib.h>
#include "lists.h"

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
