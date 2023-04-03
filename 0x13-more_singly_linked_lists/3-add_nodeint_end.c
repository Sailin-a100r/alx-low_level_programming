#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a linked list
 *
 * @head: pointer to the head of linked list
 * @n: number to put as data in this node
 *
 * Return: the number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *pt;

	pt = *head;

	/* set the new node */
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	/* if first node */
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	/* find last node */
	while (pt->next)
		pt = pt->next;

	/* add the node to the end */
	pt->next = temp;
	return (temp);
}
