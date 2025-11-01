#include "dog.h"
#include <stdlib.h>

/**
* free_dog - a function that frees dogs
* @d: dog struct
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
