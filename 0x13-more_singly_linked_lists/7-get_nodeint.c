#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t list.
 *
 * @head: pointer to the head of linked list
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to the nth node, or NULL if nothing.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	/* for empty lists */
	if (!head)
		return (NULL);

	while (temp)
	{
		if (index == 0)
			return (temp);
		index--;
		temp = temp->next;
	}

	/* the index doesn't exist */
	return (NULL);
}
