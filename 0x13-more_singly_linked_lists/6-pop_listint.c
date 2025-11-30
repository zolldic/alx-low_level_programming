#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - delete the head node of a listint_t list
* @head: pointer to the head node of listint_t list
* Return: the head node data (n);
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head)
		exit(EXIT_FAILURE);

	n = (*head)->n;

	tmp = (*head)->next;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
