#include"main.h"
/**
 * _memset - funtion that fills a block of memory with a specified values.
 * @s:the starting address of block of memory to be filled.
 * @b: the values to be filled in.
 * @n: number of bytes that will be changed.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
