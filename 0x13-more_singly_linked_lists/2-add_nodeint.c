#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adding node at front
  * @head: header
  * @n: value to be added
  *
  * Description: add front
  * Return: the head
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
}

