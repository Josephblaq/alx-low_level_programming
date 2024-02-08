#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct listint_s - linked list
 * @n: pointer to next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
int _putchar(char c);

#endif