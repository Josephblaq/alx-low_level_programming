#include <stdio.h>
#include "lists.h"

/**
 * print_listint - programme prints all the elements of a listint_t list
 * @h: pointer to list_t list head
 *
 * Return: return the number of nodes in list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
