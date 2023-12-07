#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - lenght
 * @h: head of list
 *
 * Description: getting the lenght
 * Return: the lenght
 */
size_t dlistint_len(const dlistint_t *h)
{
		const dlistint_t *t = h;
		int size = 0;

		if (!h)
			return (0);
		for (size = 0; t != NULL; t = t->next, size++){}
		return (size);
}
