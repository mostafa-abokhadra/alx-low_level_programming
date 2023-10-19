#include "lists.h"
#include <stdio.h>

/**
  * print_list - printing elemnts of a linked list
  * @h: head of linked list
  *
  * Description: print to stdout inc specified formula
  * Return: count or nodes
  */
size_t print_list(const list_t *h)
{
		unsigned int no_nodes = 0;

			while (h != NULL)
			{
				if (h->str == NULL)
					printf("[0] (nil)\n");
				else
					printf("[%d] %s\n", h->len, h->str);
				no_nodes++;
				h = h->next;
			}

		return (no_nodes);
}
