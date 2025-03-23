#include "dog.h"
#include <stdio.h>

/**
 *  init_dog - initializes a variable of type struct dog
 *  @d: that's the initialized parameter
 *  @name: name of the pet
 *  @age: age of the pet
 *  @owner: owner of the pet
 *
 *  Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
