#include<stdio.h>
#include<unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character to be written
 * Return: 0 on if successful
 * on error, -1 will be returned and errorno is set appriopriately.
 */
in _putchar(char c)
{
	return (write(1, &c, 1));
}
