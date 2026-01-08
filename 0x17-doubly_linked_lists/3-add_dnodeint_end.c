#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: double pointer to dlistint_t list
* @n: new data to adds to the dlistint_t list
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *p;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	p = *head;

	while (p->next != NULL)
		p = p->next;

	p->next = new;
	new->prev = p;

	return (new);
}
