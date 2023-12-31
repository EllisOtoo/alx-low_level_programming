#include "lists.h"

/*
 * add a new nodw at the beginning of a list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);/* return NULL if memoery allocation failed*/
	}

	new_node->n = n;/* Assigning value to new_node*/
	new_node->next = *head; /* making the new node points to current head*/

	*head = new_node;/* update the head of the new_node*/
	return (new_node);
}
