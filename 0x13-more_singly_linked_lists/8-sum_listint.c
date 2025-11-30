#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t list
* @head: pointer to a listint_t list
* Return: sum of all data (n) in a listint_t list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	if (!head)
		return (sum);

	p = head;

	while (p)
	{
		sum += (p->n);
		p = p->next;
	}

	return (sum);
}
