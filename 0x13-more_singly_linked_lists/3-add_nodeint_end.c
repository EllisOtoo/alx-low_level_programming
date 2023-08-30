#include "lists.h"

/*
 *Adds a new node at the end of a list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	/* allocate memory for the new_node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL); /* If memory allocated failed */
	}

	/*set values of the new_node */
	new_node->n = n;
	new_node->next =  NULL;

	/* handle case where the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* traverse the list to find the last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node); /* The address of new element*/
}
