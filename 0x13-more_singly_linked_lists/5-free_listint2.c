#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - freeing list
  * @head: head of list
  *
  * Description: freeing and assigning head to null
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
		listint_t *temp, *n;

		if (*head == NULL)
			return;
		temp = *head;
		while ((temp) != NULL)
		{
			n = temp;
			temp = temp->next;
			free(n);
		}
		(*head) = (NULL);
}

