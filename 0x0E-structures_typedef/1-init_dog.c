#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initializes a struct dog variable
 * @d: pointer to struct dog to be initialized
 * @name: name to be assigned
 * @age: age to assigned
 * @owner: owner to assigned
 */



void initialize_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

