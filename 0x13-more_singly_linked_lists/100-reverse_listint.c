#include "lists.h"

/*
 * * reverse_listint - reverse a list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next; /* save the next node */
		(*head)->next = prev; /* Reverse the next pointer */

		prev = *head; /* move prev one step forward forward */
		*head = temp; /* move head one step forward */
	}
	*head = prev; /*update the head of pointer to the new first node */
	return (*head);
}
