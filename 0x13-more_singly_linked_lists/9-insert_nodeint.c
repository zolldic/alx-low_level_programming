#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the head of the list
* @idx: index where the new node should be inserted
* @n: data to store in the new node
*
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp)
	{
		if (i == idx)
			break;

		tmp = tmp->next;
		i++;
	}

	if (tmp)
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}

	return (NULL);
}

