#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *starter, *pt;
	int index, i;

	if (!head)
		return (NULL);

	index = 0;
	pt = head;
	while (pt)
	{
		starter = head;
		for (i = 0; i < index; i++)
		{
			if (pt == starter)
			{
				return (pt);
			}
			starter = starter->next;
		}
		index++;
		pt = pt->next;
	}
	return (pt);
}
