#include "lists.h"

size_t listint_len(const listint_t *h)
{
		unsigned int number_of_nodes = 0;

		while (h != NULL)
		{
			number_of_nodes++;
			h = h->next;
		}
		return (number_of_nodes);
}

