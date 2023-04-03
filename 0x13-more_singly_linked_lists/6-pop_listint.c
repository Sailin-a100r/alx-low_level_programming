#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and return the head node's data.
 *
 * @head: pointer to the head node
 *
 * Return: the data of the head node, or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	/* null head */
	if (!head)
		return (0);

	/* store next node */
	temp = (*head)->next;
	value = (*head)->n;

	/* delete the node */
	free(*head);

	/* move the head pointer */
	*head = temp;
	return (value);
}
