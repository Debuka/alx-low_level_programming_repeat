#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of struct dog type
 * @d: pointer to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: This function initializes a struct dog with name,
 *              age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Check if pointer is valid */
		return;

	d = malloc(sizeof(struct dog)); /* Allocate memory for the struct */
	if (d == NULL) /* Check if allocation failed */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
