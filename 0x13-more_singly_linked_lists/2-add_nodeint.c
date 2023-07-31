#include "lists.h"

/**
 * add_nodeint - add a new node at the beginnig of the linked list.
 *
 * @head: pass a pointer by reference, take the head pointer address.
 * @n: take the data of the node
 *
 * Return: address of new node to head;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
