#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 * @h: A ponter to the head of the list
 *
 * Return: The number of nodes that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}

	return (count);
}
