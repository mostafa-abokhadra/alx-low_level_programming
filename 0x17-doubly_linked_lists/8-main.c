#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 99);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 1);
    print_dlistint(head);
    printf("-----------------\n");
    return (0);
}
