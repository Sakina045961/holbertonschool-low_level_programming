#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: that's prints a struct dog
 *
 * Return: Always 0.
 *
 */

void print_dog(struct dog *d)

{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n",  d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");

	}
	else
		return;
}
