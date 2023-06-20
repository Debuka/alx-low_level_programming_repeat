#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns length of a string
 * @s: String to check
 *
 * Return: Length of the string checked
 */
int _strlen(char *s)
{
    int ln = 0;

    while (s[ln] != '\0')
    {
        ln++;
    }

    return (ln);
}

/**
 * _strcpy - Copies string from src to dest
 * @dest: Destination
 * @src: Source
 *
 * Return: Pointer of destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    int ln = 0;
    int i = 0;

    while (src[ln] != '\0')
    {
        ln++;
    }
    
    for (i = 0; i < ln; i++)
    {
        dest[i] = src[i];
    }
    dest[ln] = '\0';

    return (dest);
}

/**
 * new_dog - Makes a new dog struct
 * @name: Name of the dog
 * @age: it's age
 * @owner: The owner
 *
 * Return: Pointer a to the new dog struct (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int lght1, lght2;

    lght1 = _strlen(name);
    lght2 = _strlen(owner);

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog->name = malloc(sizeof(char) * (lght1 + 1));
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }

    dog->owner = malloc(sizeof(char) * (lght2 + 1));
    if (dog->owner == NULL)
    {
        free(dog);
        free(dog->name);
        return (NULL);
    }

    _strcpy(dog->name, name);
    _strcpy(dog->owner, owner);
    dog->age = age;

    return (dog);
}
