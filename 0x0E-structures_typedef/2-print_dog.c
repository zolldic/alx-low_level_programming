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
		printf("Name: %s\n", d->name) :
		printf("Name: (nil)\n");

	d->age ?
		printf("Age: %f\n", d->age) :
		printf("Age: (nil)\n");

	d->owner ?
		printf("Owner: %s\n", d->owner) :
		printf("Owner: (nil)\n");
}
