#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - add node at the tail
  * @head: the header
  * @n: the value
  *
  * Description: adding node to end
  * Return: the head
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *new_node = (listint_t *)malloc(sizeof(listint_t)), *t = *head;

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
			*head = new_node;
		else
		{
			while (t->next != NULL)
				t = t->next;
			t->next = new_node;
		}
		return (*head);
}

