#include "lists.h"
#include <stdio.h>

/**
  * print_listint - printing linked list elem
  * @h: header of linked list
  *
  * Description: using printf to print
  *
  * Return: number of elements
  */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
