#include <stdlib.h>
#include <string.h>
#include "dog.h"

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
	int name_len = strlen(name);
	int owner_len = strlen(owner);

	ptr = (dog_t *) malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);

	ptr->name = (char *) malloc(sizeof(char) * (name_len + 1));
	if (!ptr->name)
		return (NULL);
	ptr->name = name;

	ptr->age = age;

	ptr->owner = (char *) malloc(sizeof(char) * (owner_len + 1));
	if (!ptr->owner)
		return (NULL);
	ptr->owner = owner;

	return (ptr);
}
