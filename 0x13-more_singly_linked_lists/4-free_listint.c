#include "lists.h"

/**
 * free_listint - free/delete the entire linked list.
 *
 * @head: take the head of the node as paremeter
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *tempo;

	while (ptr != NULL)
	{
		tempo = ptr->next;
		free(ptr);
		ptr = tempo;
	}
}
