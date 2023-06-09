#include "main.h"
/**
 * _strcat -  funtion that concatenates two strings.
 * @dest: values to be inputed.
 * @src: an input value.
 * Return: nothing.
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int z;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[k] = src[z];
		k++;
		z++;
	}

	dest[k] = '\0';
	return (dest);
}
