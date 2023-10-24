#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * add_nodeint - adding node at front
  * @head: head of list
  * @n: value
  *
  * Description: adding a new node at front
  * Return: the head of list
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

/**
  * head_cases - only head cases of insertion
  * @head: head of list
  * @idx: index
  * @n: value
  *
  * Description: to keep 40 line per function
  * Return: head of list
  */
listint_t *head_cases(listint_t **head, unsigned int idx, int n)
{
		listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = NULL;
			(*head) = new_node;
			return (*head);
		}
		else
		{
			free(new_node);
			return (NULL);
		}
}

/**
  * insert_nodeint_at_index - inserting at index
  * @head: head of list
  * @idx: index
  * @n: value
  *
  * Description: adding a new node at a given index
  * Return: the head
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
		listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
		listint_t *t = *head;
		unsigned int func_index = 0;

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if ((*head) == NULL)
		{
			(*head) = head_cases(head, idx, n);
			if (*head == NULL)
				free(new_node);
			return (*head);
		}
		if ((*head) != NULL && idx == 0)
			(*head) = add_nodeint(head, n);
		else
		{
			while (t->next != NULL && func_index < (idx - 1))
			{
				func_index++;
				t = t->next;
			}
			if (func_index == (idx - 1))
			{
				new_node->next = t->next;
				t->next = new_node;
			}
			else
			{
				return (NULL);
			}
		}
		return (*head);
}

