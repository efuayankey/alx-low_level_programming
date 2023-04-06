#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a ponter to the first node of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
		free(temp);

	return (data);
}
