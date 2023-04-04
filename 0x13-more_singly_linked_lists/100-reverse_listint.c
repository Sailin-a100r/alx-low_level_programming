#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t list
 *
 * @head: pointer to the head node of the list to reverse
 *
 * Return: pointer to the head node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *newhead;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		newhead = *head;
		while (newhead->next)
			newhead = newhead->next;
		switch_nodes(*head);
		*head = newhead;
		return (newhead);
	}
}

/**
 * switch_nodes - function that switches the last two nodes
 *
 * @head: pointer to the head node of the list
 */

void switch_nodes(listint_t *head)
{
	listint_t *pt;

	pt = head;

	/* Base case */
	if (pt->next == NULL)
		return;

	/* if not the last nodes move to next */
	if (pt->next->next)
	{
		pt = pt->next;
		switch_nodes(pt);
	}

	if (head->next == NULL)
		return;
	/* switch last two nodes */
	head->next->next = head;
	head->next = NULL;

}
