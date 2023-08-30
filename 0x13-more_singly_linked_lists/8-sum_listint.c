#include "lists.h"

/*
 * sum_listint - returns the sum of all the data (n) of a list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* Traverse the list & add up the values */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next; /* move to the next node */
	}
	return (sum);
}
