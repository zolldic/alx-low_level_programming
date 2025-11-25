#include "lists.h"
#include <assert.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int x = 0;
	list_t *p;
	char *str;

	p = (list_t *)h;

	while (p)
	{
		str = p->str;
		if (!p->str)
		{
			str = "(nil)";
			p->len = 0;
		}
		printf("[%d] %s\n", p->len, str);
		p = p->next;
		x++;
	}
	return (x);
}
