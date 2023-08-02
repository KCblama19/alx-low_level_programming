#include "lists.h"
/**
 * free_listint_safe - free the entire linked list
 *
 * @h - double pointer to the head of the linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		printf("[%p] %d\n", (void *)*h, (*h)->n);

		temp = (*h)->next;
		free(*h);
		*h = temp;
		len++;
	}

	*h = NULL;

	return (len);
}
