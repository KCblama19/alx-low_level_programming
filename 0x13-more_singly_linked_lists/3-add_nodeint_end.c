#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the linked list.
 *
 * @head: pass a pointer by reference and take head address;
 * @n: take the data of the node
 *
 * Return: address of new element added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	} else
	{
		listint_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}

		current_node->next = ptr;
	}

	return (ptr);
}
