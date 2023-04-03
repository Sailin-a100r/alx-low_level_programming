#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: pointer to the head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* check for null pointer */
	if (head == NULL)
		return;

	/* free each node */
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	
	/* set head to NULL */
	*head = NULL;
}
