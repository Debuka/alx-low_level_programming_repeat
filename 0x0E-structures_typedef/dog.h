#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's informations
 * @name: Pointer to it's name
 * @age: The dog's age
 * @owner: Pointer to it's owner's name
 *
 * Description: This struct is all about dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
