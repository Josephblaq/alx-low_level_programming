#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list
 * @head: pointer that points to the head address of listint_t
 * @n: integer to be contained by a new node
 *
 * Return: NULL if function fail, oterwise returnthe address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
