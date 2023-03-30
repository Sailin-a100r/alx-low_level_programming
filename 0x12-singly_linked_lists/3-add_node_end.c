#include "lists.h"

/**
 * add_node_end - function that adds a node at the end of a linked list
 *
 * @head: pointer to the pointer of first node in a list
 * @str: value to put in the new node
 *
 * Return: pointer to the new element, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL, *iterator = NULL;
	unsigned int length;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	temp->str = strdup(str);
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	iterator = *head;
	while (iterator)
	{
		if (iterator->next == NULL)
			break;
		iterator = iterator->next;
	}

	iterator->next = temp;
	return (iterator->next);
}
