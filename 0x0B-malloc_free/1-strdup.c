#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * _strdup - copies strng to new memory location
 * @str: string that will be dupilcated
 * Return: pointer to the duplicated string
 * otherwise null.
 */
char *_strdup(char *str)
{
	char *dupstr;
	int k = 0;
	int l = 0;

	if (str == NULL)
		return (NULL);

	while (str[k] != '\0')
		k++;

	dupstr = malloc(sizeof(char) * (k + 1));

	if (dupstr == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		dupstr[l] = str[l];

	return (dupstr);
}
