#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - getting node
  * @head: head of list
  * @index: index of data to be pulled
  *
  * Description: nth node
  * Return: the node, 0 if not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int func_index = 0;

		if (head == NULL)
			return (NULL);
		while (head != NULL)
		{
			if (func_index == index)
				return (head);
			func_index++;
			head = head->next;
		}
		return (NULL);
}

