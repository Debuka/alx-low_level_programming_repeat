#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees  allocated memory for a struct dog
 * @d: the memory that will be freed
 *
 * Description: Frees the memory allocated for the struct dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
