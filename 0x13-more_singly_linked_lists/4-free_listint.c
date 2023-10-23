#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - freeing list
  * @head: header of list
  *
  * Description: using free to deallocate
  * Return: nothig
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

