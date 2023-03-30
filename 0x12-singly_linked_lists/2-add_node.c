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
	int length;
	char *string = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	string = malloc(length * sizeof(char));
	strcpy(string, str);

	temp->str = string;
	temp->len = length;
	temp->next = *head;

	*head = temp;
	return (*head);
}
