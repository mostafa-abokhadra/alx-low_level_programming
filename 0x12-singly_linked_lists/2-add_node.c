#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  *add_node - at front
  * @head: the header
  * @str: string to be added
  *
  * Description: adding a nodea at front
  * Return: address of the added node
  */
list_t *add_node(list_t **head, const char *str)
{
		list_t *new_node = (list_t *)malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);
		new_node->next = NULL;
		new_node->len = strlen(str);
		if (str == NULL)
			new_node->str = NULL;
		else
		{
			new_node->str = (char *)malloc(sizeof(char) * strlen(str) + 1);
			if (new_node->str == NULL)
			{
				free(new_node->str);
				free(new_node);
				return (NULL);
			}
			new_node->str = strdup(str);
		}
		if (*head == NULL)
		{
			*head = (list_t *)malloc(sizeof(list_t));
			if (*head == NULL)
			{
				free(new_node->str);
				free(new_node);
				free(*head);
				return (NULL);
			}
			*head = new_node;
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (*head);
}

