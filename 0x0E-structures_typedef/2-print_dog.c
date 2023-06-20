#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints details of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: Prints the name, age, owner of a dog.
 *              If name or owner is NULL, returns "(nil)".
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
