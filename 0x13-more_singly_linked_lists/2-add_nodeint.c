#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a linked list
 *
 * @head: pointer to the head of linked list
 * @n: number to put as data in this node
 *
 * Return: the number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
