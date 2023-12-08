        /*
                unsigned int step = 0;
                dlistint_t *t = *h, *new_node = NULL;

                if (idx == 0)
                        return (add_dnodeint(h, n));
                new_node = malloc(sizeof(dlistint_t));
                if (!new_node)
                        return (NULL);
                new_node->n = n;
                for (; step < idx - 1 && t->next != NULL; t = t->next, step++)
                {}
                if (step == idx - 1)
                {
                        new_node->next = t->next;
                        t->next = new_node;
                        new_node->prev = t;
                        new_node->next->prev = new_node;
                        return (new_node);
                }
                else
                {
                        free(new_node);
                        return (NULL);
                }
        */
