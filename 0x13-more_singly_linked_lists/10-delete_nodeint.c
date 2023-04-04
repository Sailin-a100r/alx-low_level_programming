#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * at a given position of a linked list
 *
 * @head: pointer to the head of linked list
 * @idx: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head,unsigned int idx)
{
	listint_t *temp, *pt;

	pt = *head;

	/* if empty list */
	if (*head == NULL)
		return (-1);

	/* if delete first node */
	if (idx == 0)
	{
		*head = pt->next;
		free(pt);
		return (1);
	}

	/* find node of index */
	while (idx > 1 && pt)
	{
		idx--;
		pt = pt->next;
	}

	/* add the node at idx */
	if (idx == 1)
	{
		temp = pt->next;
		pt->next = temp->next;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
