#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a data type struct named dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: this struct holds information about dogs names, ages and owners
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
