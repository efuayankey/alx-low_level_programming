#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize new node */
    new_node->n = n;
    new_node->next = *head;

    /* Update head to point to new node */
    *head = new_node;

    /* Return address of new node */
    return (new_node);
}
