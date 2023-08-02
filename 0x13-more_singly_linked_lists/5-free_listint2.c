#include "lists.h"

/**
 * free_listint2 - free the linked list and set head to NULL
 *
 * @head: take the head linked list as a parameter
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *tempo;
	
	if (head == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		tempo = ptr->next;
		free(ptr);
		ptr = tempo;
	}

	*head = NULL;
}
