#include "lists.h"
#include <stddef.h>

/**
* listint_len - returns the number of elements in a
*	linked listint_t list
* @h: pointer to a listint_t list
* Return: number of element in a listint_t list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
