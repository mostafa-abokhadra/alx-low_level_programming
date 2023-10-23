#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - freeing list
  * @header: head of list
  *
  * Description: freeing and assigning head to null
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
		listint_t *temp;

		while ((*head) != NULL)
		{
			temp = (*head);
			(*head) = (*head)->next;
			free(temp);
		}
		(*head) = (NULL);
}

