#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - freeing
 * @head: head of list
 *
 * Description: freeing heap
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
		dlistint_t *t = head;

		for (; t != NULL ;)
		{
			head = head->next;
			free(t);
			t = head;
		}
}
