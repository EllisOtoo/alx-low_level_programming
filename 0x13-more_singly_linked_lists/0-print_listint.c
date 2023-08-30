#include "lists.h"

/**
* print_listint - prints all the elements of a list
*/

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next; /* move to the next node */
		node_count++; /* increment the node_count*/
	}
	return (node_count);
}
