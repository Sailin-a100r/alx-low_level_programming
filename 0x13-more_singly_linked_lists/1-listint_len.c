#include "lists.h"

/**
 * listint_len - function that prints 
 * number of the elements of a listint_t list.
 *
 * @h: pointer to the head of linked list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
