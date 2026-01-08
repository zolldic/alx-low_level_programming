#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: double pointer to dlistint linked list
* @n: new data to add to the linked list
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
