#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to the first node in a list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		nodes++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (nodes);
}
