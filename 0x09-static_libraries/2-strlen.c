#include"main.h"
/**
 * _strlen - funtion that checks the length of a string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int longit = 0;

	while (*s != '\0')
	{
		longit++;
		s++;
	}

	return (longit);
}
