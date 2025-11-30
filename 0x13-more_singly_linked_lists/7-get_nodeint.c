#include "lists.h"

/**
* get_nodeint_at_index - get the node at index
* @head: pointer to the listint_t list
* @index: the index of the node to return
* Return: the node at index or NULL of node does'nt exist
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *p;

	if (!head)
		return (NULL);

	p = head;

	while (p)
	{
		if (idx == index)
			return (p);

		p = p->next;
		idx++;
	}

	return (NULL);
}
