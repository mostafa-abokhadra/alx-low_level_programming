#include "lists.h"
#include <string.h>

/**
  *add_node - at front
  * @head: the header
  * @str: string to be added
  *
  * Description: adding a nodea at front
  * Return: address of the added node
  */
list_t* add_node(list_t** head, const char* str)
{
list_t *new_node = (list_t*) malloc(sizeof(list_t));

if (new_node != NULL)
{
if (new_node->str != NULL)
{
new_node->str = strdup(str);
}
else
{
free(new_node->str);
free(new_node);
return (NULL);
}
if (head == NULL)
{
head = (list_t **) malloc(sizeof(list_t *));
if (head != NULL)
{
*head = (list_t*)malloc(sizeof(list_t));
}
else
{
return (NULL);
}
new_node->next = NULL;
if (*head != NULL)
{
*head = new_node;
return (*head);
}
else
{
return (NULL);
}
}
else
{
if (*head == NULL)
{
new_node->next = NULL;
*head = new_node;
return (*head);
}
else
{
new_node->next = *head;
*head = new_node;
return (*head);
}
}
}
else
return (NULL);
}
