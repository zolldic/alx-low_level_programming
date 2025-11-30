#include "lists.h"

/**
* pop_listint - delete the head node of a listint_t list
* @head: pointer to the head node of listint_t list
* Return: the head node data (n);
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	n = (*head)->n;
	tmp = (*head)->next;

	free(*head);

	*head = tmp;

	return (n);
}
