#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - the sum of all the data (n) of a dlistint_t linked list
* @head: pointer to the head of the node
* Return: (0) if the list is empty, otherwise the sum of all the data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p;

	p = head;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
