#include "lists.h"

/**
* get_dnodeint_at_index - get the nth node of a dlistint_t linked list
* @head: pointer to the head of dlistint_t list
* @index: index of node
* Return: return the node at @index otherwise NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int idx = 0;

	if (!head)
		return (NULL);

	p = head;

	while (p)
	{
		if (idx == index)
			return (p);

		idx++;
		p = p->next;
	}

	return (NULL);
}
