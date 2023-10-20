#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  *
  *
  *
  *
  *
  */
list_t* add_node_end(list_t** head, const char* str)
{
list_t* new_node = (list_t*)malloc(sizeof(list_t)), *t = *head;

if (new_node == NULL)
return (NULL);
if (str == NULL)
new_node->str = NULL;
else
{
new_node->str = (char*)malloc(sizeof(char) * strlen(str) + 1);
if (new_node->str == NULL)
{
free(new_node->str);
free(new_node);
return (NULL);
}
new_node->str = strdup(str);
new_node->next = NULL;
new_node->len = strlen(str);
}
if (*head == NULL)
{
*head = new_node;
return (*head);
}
else
{
while (t->next != NULL)
t = t->next;
t->next = new_node;
return (t->next);
}
}
