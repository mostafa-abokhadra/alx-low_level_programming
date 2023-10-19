#include "stdlib.h"
#include <stdio.h>
#include "lists.h"

/**
  * list_len - length of a linked list
  * @h: header of the linked list
  *
  * Description: no of elements
  * Return: the length
  */
size_t list_len(const list_t *h)
{
		unsigned int no_nodes = 0;

		while (h != NULL)
		{
			no_nodes++;
			h = h->next;
		}

		return (no_nodes);
}
