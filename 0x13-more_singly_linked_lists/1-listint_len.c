#include "lists.h"
#include <stdio.h>

/**
 * listint_t - adds a new node at the beginning of a listint_t list.
 * @h: head pointer
 *
 * Return: the number of elements in a linked listint_t list.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
