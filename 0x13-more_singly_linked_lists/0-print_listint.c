#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a listint_t list
 * Return: the number of nodes in a listint_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
