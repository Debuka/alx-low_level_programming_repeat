#include "main.h"
/**
 *_memcpy - copies memory a particilar location to another
 *@dest: memory is stored
 *@src: memory is copied to
 *@n: number of bytes
 *
 *Return: copied memory with changed n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
