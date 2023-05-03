#include "lists.h"

/**
 * add_nodeint - Appends a new node to the head of a linked list.
 * @head:Address of the starting node in the list.
 * @n: Data to populate the new node with.
 *
 * Return: An indicator to the new node's pointer or NULL if operation was not successful.
 */
	listint_t *add_nodeint(listint_t **head, const int w)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->w = w;
	new->next = *head;
	*head = new;

	return (new);
}
