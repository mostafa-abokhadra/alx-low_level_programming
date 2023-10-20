#include "lists.h"
#include <stdlib.h>

/**
  * free_list - freeing a linked list
  * @head: head of list
  *
  * Description: just deallocating
  * Return: nothing
  */
void free_list(list_t *head)
{
		list_t *t;

		while (head != NULL)
		{
			free(head->str);
			t = head;
			head = head->next;
			free(t);
		}
		free(head);
}

