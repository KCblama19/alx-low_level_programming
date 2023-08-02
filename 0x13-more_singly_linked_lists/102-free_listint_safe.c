#include "lists.h"

/**
 * free_listint_safe - frees the entire linked list
 *
 * @h: pointer to the head of the linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
