#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to start searching from the head node
 *
 * Return: address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *hare = head;

	if (!head)
		return (NULL);

	while (slow && hare && hare->next)
	{
		hare = hare->next->next;
		slow = slow->next;
		if (hare == slow)
		{
			slow = head;
			while (slow != hare)
			{
				slow = slow->next;
				hare = hare->next;
			}
			return (hare);
		}
	}

	return (NULL);
}
