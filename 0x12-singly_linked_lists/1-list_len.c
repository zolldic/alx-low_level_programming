#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: pointer to the head of the list_t list
* Return: the number of elements in list_t list
*/

size_t list_len(const list_t *h)
{
	int x = 0;
	const list_t *p;

	p = (list_t *)h;

	while (p)
	{
		p = p->next;
		x++;
	}
	return (x);
}
