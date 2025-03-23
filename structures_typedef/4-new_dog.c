#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	new_dog->name = name ? strdup(name) : NULL;
	new_dog->owner = owner ? strdup(owner) : NULL;

	if ((name && new_dog->name == NULL) || (owner && new_dog->owner == NULL))
	{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
	}


	new_dog->age = age;

	return (new_dog);
}
