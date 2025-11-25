#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to the head of the list
* @str: string to be added to the new node
* Return: the address of the new element, or NULL if it failed
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *p;

	p = *head;
	new = (list_t *) malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (p == NULL)
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
