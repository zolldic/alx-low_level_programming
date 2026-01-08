#include "lists.h"


/**
* dlistint_len - return the number of elements
*	in a linked dlistint_t list
* @h: a pointer to doubly linked list
* Return: the number of nodes in dlistint list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
