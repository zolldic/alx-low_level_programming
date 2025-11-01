#include <stdlib.h>
#include <string.h>
#include "dog.h"


/**
* _strlen - calculate string length
* @str: a string
* Return: length of a string
*/

int _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: a dog_t pointer or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int x;
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);

	ptr = (dog_t *) malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);

	ptr->name = (char *) malloc(sizeof(char) * (name_len + 1));
	if (!ptr->name)
	{
		free(ptr);
		return (NULL);
	}

	for (x = 0; x < name_len; x++)
		ptr->name[x] = name[x];
	ptr->name[x] = '\0';

	ptr->age = age;

	ptr->owner = (char *) malloc(sizeof(char) * (owner_len + 1));
	if (!ptr->owner)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (x = 0; x < owner_len; x++)
		ptr->owner[x] = owner[x];
	ptr->owner[x] = '\0';
	return (ptr);
}
