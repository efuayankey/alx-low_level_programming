#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: ponter to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, otherwise NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, int n)

{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);

		new->n = n;
		new->next = NULL;

	if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next)
	temp = temp->next;
{
	temp->next = new;
}
	return (new);
	}

