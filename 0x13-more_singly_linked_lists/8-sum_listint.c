#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data
 * of a listint_t linked list.
 *
 * @head: pointer to the head node
 *
 * Return: sum of all data of nodes in the linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *pt;
	int sum = 0;

	/* check for empty list */
	if (!head)
		return (0);

	/* iterate and add */
	pt = head;
	while (pt)
	{
		sum = sum + pt->n;
		pt = pt->next;
	}
	return (sum);
}
