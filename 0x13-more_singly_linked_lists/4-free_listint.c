#include <stdlib.h>
#include "lists.h"
/**
 * free_listing - function that frees a listint_t list
 * @head: pointer pointing to the head of listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *linked;

	while (head)
	{
		linked = head->next;
		free(head);
		head = linked;
	}
}
