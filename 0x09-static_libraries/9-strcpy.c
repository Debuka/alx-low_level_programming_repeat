#include "main.h"
/**
 * char *_strcpy - a function that copies strings
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0, q = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; q < h ; q++)
	{
		dest[q] = src[q];
	}
	dest[h] = '\0';
	return (dest);
}
