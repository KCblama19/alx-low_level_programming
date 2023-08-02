#include "lists.h"

/**
 * print_listint - prints all the element of a single linked list.
 *
 * @h: takes the head pointer.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
