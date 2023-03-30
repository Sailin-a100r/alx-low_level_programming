#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to the pointer of first node in a list
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
