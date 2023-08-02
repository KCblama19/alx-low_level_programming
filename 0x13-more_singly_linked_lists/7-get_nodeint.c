#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list.
 *
 * @head: a pointer to the head of the linked list.
 * @index: the index of the node list.
 *
 * Return: nth node of the linked list,or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		count++;
		current = current->next;
	}

	return (NULL);
}
