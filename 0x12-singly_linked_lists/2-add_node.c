#include "lists.h"

/**
 * add_node - function that adds a node at the beggining of a linked list
 *
 * @head: pointer to the pointer of first node in a list
 * @str: value to put in the new node
 *
 * Return: pointer to the new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	unsigned int length;

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}

	length = strlen(str);

	temp->str = strdup(str);
	temp->len = length;
	temp->next = *head;

	*head = temp;
	return (*head);
}
