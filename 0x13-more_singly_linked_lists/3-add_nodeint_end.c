#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t lists
* @head: pointer to head of listint_t list
* @n: element of the new node in a listint_t
* Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *p;

	p = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);


	new->n = n;
	new->next = NULL;

	if (!p)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (p->next != NULL)
		p = p->next;

	p->next = new;

	return (new);
}
