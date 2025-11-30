#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index
*	of a listint_t linked list
* @head: pointer to the head node of listint_t list
* @index: the index of the node that should be deleted
* Return: (1) if success or (-1) on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *next;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	p = *head;

	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}

	while (p != NULL && idx < index - 1)
	{
		p = p->next;
		idx++;
	}

	if (p == NULL || p->next == NULL)
		return (-1);

	next = p->next;
	p->next = next->next;
	free(next);

	return (1);
}
