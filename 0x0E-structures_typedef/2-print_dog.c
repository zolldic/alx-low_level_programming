#include "dog.h"
#include <stdio.h>
/**
* print_dog - function that prints a struct dog
* @d: struct of type dog
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;

	d->name ?
		printf("name: %s\n", d->name) :
		printf("name: (nil)\n");

	d->age ?
		printf("age: %f\n", d->age) :
		printf("age: (nil)\n");

	d->owner ?
		printf("owner: %s\n", d->owner) :
		printf("owner: (nil)\n");
}
