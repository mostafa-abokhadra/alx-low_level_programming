#include <stdlib.h>
#include "lists.h"

/**
 * 
 * 
 *
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
		int sum = 0;

		if (!head)
			return (0);
		for (; head != NULL; head = head->next)
			sum += head->n;
		return (sum);
}
