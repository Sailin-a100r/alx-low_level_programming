#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *arr[100], *pt;
	int index, i;

	if (!head)
		return (NULL);

	index = 0;
	pt = head;
	while (pt)
	{
		for (i = 0; i < index; i++)
		{
			if (pt == arr[i])
			{
				return (pt);
			}
		}
		arr[index] = pt;
		index++;
		pt = pt->next;
	}
	return (pt);
}
