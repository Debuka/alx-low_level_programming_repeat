#include"main.h"
#include<stddef.h>
/**
 * _strchr - checks for the first occurence of character, the entry point.
 * @s: input value
 * @c: input value
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
