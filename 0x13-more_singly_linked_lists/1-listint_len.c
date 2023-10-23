#include "lists.h"

/**
  * listint_len - length of a linked list
  * @h: header
  *
  * Description: length or size
  * Return: the length
  */
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

