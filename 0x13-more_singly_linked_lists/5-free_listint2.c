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
		listint_t *temp;

		if (*head == NULL)
			return;
		while ((*head) != NULL)
		{
			temp = (*head)->next;
			free(*head);
			if (temp == NULL)
				break;
			(*head) = temp;
		}
		(*head) = (NULL);
}

