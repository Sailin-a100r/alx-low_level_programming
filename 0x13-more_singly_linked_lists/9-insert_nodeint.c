#include "lists.h"

/**
 * insert_nodeint_at_index - function that adds a new node
 * at a given position of a linked list
 *
 * @head: pointer to the head of linked list
 * @n: number to put as data in this node
 * @idx: index of the new node
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(
		listint_t **head,
		unsigned int idx,
		const int n)
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
	/* if replace head */
	else if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	/* find idx node */
	while (idx > 1 && pt)
	{
		idx--;
		pt = pt->next;
	}
	/* add the node at idx */
	if (idx == 1)
	{
		temp->next = pt->next;
		pt->next = temp;
		return (temp);
	}
	else
		return (NULL);
}
