#include "lists.h"

/**
 * list_len - function that returns the number of elements in linked list
 *
 * @h: pointer to the first node in a list
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (nodes);
}
