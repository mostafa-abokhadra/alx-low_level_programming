int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
                dlistint_t *t = *head, *t2;
                unsigned int i = 0;

                if (!(*head))
                        return (-1);
                if (index == 0)
                {
                        *head = (*head)->next;
                        free(t);
                        return (1);
                }
                for (; i < index - 1 && t->next != NULL; t = t->next, i++)
                {}
                if (i == index - 1 && t->next != NULL)
                {
                        t2 = t->next;
                        if (t->next->next != NULL)
                                t->next->next->prev = t;
                        t->next = t->next->next;
                        free(t2);
                        return (1);
                }
                else
                        return (-1);
}
