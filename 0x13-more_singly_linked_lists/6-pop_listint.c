#include "lists.h"

/**
 * pop_listint - Deletes the head node of the linked list.
 *
 * @head: take the head address as double pointer
 *
 * Return: value of head node, otherwise 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;
	
	if (!head || !*head)
		return (0);

	if (head != NULL && *head != NULL)
	{
		data = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (data);
}
