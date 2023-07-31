#include "lists.h"

/**
 * listint_len - prints the number of elements in the linked list
 *
 * @h: take the head pointer as pointer.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
