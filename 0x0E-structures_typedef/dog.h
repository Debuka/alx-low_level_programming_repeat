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
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
