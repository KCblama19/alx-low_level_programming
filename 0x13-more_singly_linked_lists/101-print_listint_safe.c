#include "lists.h"
/**
 * print_listint_safe - Prints a linked list with a loop.
 *
 * @head: pointer to the head of the linked list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise = head;
	const listint_t *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			return (count + 1);
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}

	return (count);
}
