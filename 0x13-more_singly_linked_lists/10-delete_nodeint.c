#include <stdlib.h>
#include "lists.h"

/**
  *
  *
  *
  *
  *
  */
int delete_nodeint_at_index(listint_t** head, unsigned int index)
{
unsigned int c = 0;
listint_t* temp_store, *temp_head = *head;

if (*head == NULL)
return (- 1);
else if (*head != NULL && index == 0)
{
temp_store = *head;
*head = (*head)->next;
return (1);
}
else
{
while (temp_head->next != NULL && c < (index - 1))
{
c++;
temp_head = temp_head->next;
}
if (c == (index - 1))
{
temp_store = temp_head->next;
temp_head->next = temp_head->next->next;
free(temp_store);
return (1);
}
else
return (-1);
}
}
