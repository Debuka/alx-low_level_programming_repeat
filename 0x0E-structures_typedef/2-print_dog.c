#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description:
 *   Prints the information of a dog, including its name,
 *   age, and owner. If any of the name or owner are NULL, it prints
 *   "(nil)"
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
