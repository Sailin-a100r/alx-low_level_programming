#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: pointer to the head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
