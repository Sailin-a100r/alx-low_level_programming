#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t list
 *
 * @head: pointer to the head node of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *array[100], *headpt;
	int index, i;

	if (!head)
		return (0);

	headpt = head->next;
	printf("[%p] %i\n", (void *)head, head->n);
	if (head == headpt)
	{
		printf("-> [%p] %i\n", (void *)head, head->n);
		return (1);
	}
	index = 0;
	while (headpt)
	{
		if (head == headpt)
		{
			printf("-> [%p] %i\n", (void *)head, head->n);
			return (index + 1);
		}
		for (i = 0; i <= index; i++)
		{
			if (headpt == array[i])
			{
				printf("-> [%p] %i\n", (void *)headpt, headpt->n);
				return (index + 1);
			}
		}
		if (index == 99)
			index = 1;

		array[index] = headpt;
		index++;
		printf("[%p] %i\n", (void *)headpt, headpt->n);
		headpt = headpt->next;
	}
	return (index + 1);
}
