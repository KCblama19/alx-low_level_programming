#include "lists.h"

/**
 * sum_listint - prints the sum of all the data of the linked list.
 *
 * @head: a pointer to the head of the linked list.
 *
 * Return: sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
